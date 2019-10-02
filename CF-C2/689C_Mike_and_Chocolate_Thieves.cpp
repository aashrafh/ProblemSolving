#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
ll solve(ll n) {
  ll ans = 0;
  for(ll k = 2; k*k*k <= n; ++k) {
    ans += n/(k*k*k);
  }
  return ans;
}

int main()
{
  init();
  ll m; cin>>m;
  ll l = 0, r = 1e16;
  while(r-l > 1) {
    ll n = (r+l)/2;
    if(solve(n) >= m) r = n;
    else l = n;
  }
  if(solve(r) == m) cout<<r<<Endl;
  else cout<<-1<<Endl;
  return 0;
}
