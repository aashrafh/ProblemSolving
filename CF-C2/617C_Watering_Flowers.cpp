#include <bits/stdc++.h>
#define endn "\n"
#define ll long long
using namespace std;
int main()
{
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  ll n, x1, x2, x, y1, y2, y; cin>>n>>x1>>y1>>x2>>y2;
  vector<pair<ll, ll>> d(n+5);
  for(int i=0; i<n; ++i) {
    cin>>x>>y;
    d[i].first = (x-x1)*(x-x1) + (y-y1)*(y-y1);
    d[i].second = (x-x2)*(x-x2) + (y-y2)*(y-y2);
  }
  d.push_back(make_pair(0, 0));
  ll ans = 1e18;
  for(auto p : d){
    ll r1 = p.first;
    ll r2 = 0;
    for(auto pp : d) {
      if(pp.first > r1) {
        r2 = max(r2, pp.second);
      }
    }
    ans = min(ans, r1+r2);
  }
  cout<<ans<<endn;
  return 0;
}
