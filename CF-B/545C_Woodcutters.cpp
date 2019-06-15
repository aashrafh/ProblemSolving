#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#define Endl "\n"
#define LL long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
const int N = (int) 1e5+5;
LL x[N], h[N];
LL dp[N][3];
int main()
{
  init();
  LL n;
  cin>>n;
  for(LL i=1; i<=n; ++i) cin>>x[i]>>h[i];
  x[0] = -2e9, x[n+1] = 4e9;
  for(LL i=1; i<=n; ++i)
  {
	  dp[i][0] = max(dp[i-1][0], max(dp[i-1][1], dp[i-1][2]));

	  if(x[i]-x[i-1] > h[i]+h[i-1]) dp[i][1] = max(dp[i-1][0], max(dp[i-1][1], dp[i-1][2]))+1;
	  else if(x[i]-x[i-1] > h[i]) dp[i][1]=max(dp[i-1][0],dp[i-1][1]) + 1;
	  if(x[i+1]-x[i] > h[i]) dp[i][2] = max(dp[i-1][0], max(dp[i-1][1], dp[i-1][2]))+1;
  }
  cout<<max(dp[n][0], max(dp[n][1], dp[n][2]))<<Endl;
  return 0;
}
