#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  ll a, b; cin>>a>>b;
  const ll mod = 1000000007;
  ll B = (b*(b-1)/2) % mod ;
  ll A1 = (a*(a+1)/2) % mod ;
  ll A = (A1*b+a) % mod ;
  ll ans = (A*B) % mod ;
  cout<<ans<<Endl;
  return 0;
}
