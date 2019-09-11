#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
ll f[200];
void g(ll x) {
  ll t = x;
  for(ll i=2; i*i<=x; ++i) {
    while(t%i==0) {
      f[i]++;
      t /= i;
    }
  }
  if(t != 1) f[t]++;
}
int main()
{
  init();
  ll n, m;
  while(true) {
    cin>>n>>m;
    if(!n&&!m) break;
    memset(f, 0, sizeof f);
    
    vector<pair<ll, ll>> v;
    ll t  = m;
    for(ll i = 2; i*i<=m; ++i) {
      ll c = 0;
      while(t%i==0) {
        c++;
        t /= i;
      }
      v.push_back(make_pair(i, c));
    }
    if(t != 1) v.push_back(make_pair(t, 1));

    for(ll i=2; i<=n; ++i) {
      g(i);
    }

    bool valid = true;
    for(auto e : v) {
      if(e.first > 150) {
        valid = false;
        break;
      }
      if(f[e.first] < e.second) {
        valid = false;
        break;
      }
      f[e.first] -= e.second;
    }
    if(!valid) {
      cout<<0<<Endl;
    }
    else {
      ll ans = 1;
      for(ll i=0; i<=150; ++i) {
        ans *= f[i]+1;
      }
      cout<<ans<<Endl;
    }
  }
  return 0;
}
