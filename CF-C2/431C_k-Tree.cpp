#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
void add(int &a, int b) {
  a += b;
  if(a >= 1000000007) a -= 1000000007;
}
int dp[100][2];
int main()
{
  init();
  int n, k, d; cin>>n>>k>>d;
  dp[0][0] = 1, dp[0][1] = 0;
  for(int i=1; i<=n; ++i) {
    for(int j=1; j<=k && i>=j; ++j) {
      if(j < d) {
        add(dp[i][0], dp[i-j][0]);
        add(dp[i][1], dp[i-j][1]);
      }
      else {
        add(dp[i][1], dp[i-j][0]);
        add(dp[i][1], dp[i-j][1]);
      }
    }
  }
  cout<<dp[n][1]<<Endl;
  return 0;
}
