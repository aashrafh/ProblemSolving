#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  ll t, l, r, ans, cnt, n;
  cin>>t;
  while(t--) {
    cin>>l>>r;
    ans = 0;
    for(int i=l; i<=r; ++i) {
      cnt = 0;
      for(int j=1; j*j<=i; ++j) {
        if(i%j==0) {
          cnt++;
          if(j*j < i) cnt++;
        }
      }
      if(cnt > ans) {
        ans = cnt;
        n = i;
      }
    }
    cout<<"Between "<<l<<" and "<<r<<", "<<n<<" has a maximum of "<<ans<<" divisors.\n";
  }
  return 0;
}
