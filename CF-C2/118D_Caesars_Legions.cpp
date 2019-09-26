#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
const ll mod = 100000000LL;
ll dp[105][105][15][15];
int k1, k2;
ll memo(int n1, int n2, int a, int b) {
  if(n1 == 0 && n2 == 0) return 1;
  ll &ret = dp[n1][n2][a][b];
  if(ret != -1LL) return ret;
  ret = 0;
  if(n1 > 0 && a < k1) ret += memo(n1-1, n2, a+1, 0);
  if(n2 > 0 && b < k2) ret += memo(n1, n2-1, 0, b+1);
  ret %= mod;
  return ret;
}
int main()
{
  init();
  memset(dp, -1, sizeof dp);
  int n1, n2; cin>>n1>>n2>>k1>>k2;
  cout<<memo(n1, n2, 0, 0)<<Endl;
  return 0;
}
