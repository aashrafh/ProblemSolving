#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
ll cnt, v, n, k, a[100005], sum[100005];
bool valid(ll t) {
  for(int i=t; i<=n; ++i) {
    if(sum[i]-sum[i-t]+k >= t*a[i]) {
      v = a[i];
      cnt = t;
      return true;
    }
  }
  return false;
}
int main()
{
  init();
  cin>>n>>k;
  for(int i=1; i<=n; ++i) cin>>a[i];
  sort(a+1, a+n+1);
  for(int i=1; i<=n; ++i) sum[i] = sum[i-1] + a[i];

  ll l = 1, r = n, mid;
  while(l<=r) {
    mid = (l+r)/2;
    if(valid(mid)) l = mid+1;
    else r = mid-1;
  }
  cout<<cnt<<' '<<v<<Endl;
  return 0;
}
