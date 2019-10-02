#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
ll n, a[500005], sum[500005];
int main()
{
  init();
  cin>>n;
  for(int i=1; i<=n; ++i) {
    cin>>a[i];
    sum[i] = sum[i-1]+a[i];
  }
  ll ans = 0;
  if(sum[n]%3==0) {
    ll s = sum[n]/3, ss = 2*s, cnt = 0;
    for(int i=1; i<n; ++i) {
      if(sum[i] == ss) ans += cnt;
      if(sum[i] == s) cnt++;
    }
  }
  cout<<ans<<Endl;
  return 0;
}
