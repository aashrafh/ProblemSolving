#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#include<deque>
#include <bitset>
#include <cstdio>
#include <stdio.h>
#include <string.h>
#define Endl "\n"
#define LL long long
#define F first
#define S second
#define inf 0x3f3f3f3f3f3f3f3fll
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[]={-1,-1,0,1,1,1,0,-1};
int dy[]={0,1,1,1,0,-1,-1,-1};
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int dp[110][110][15];
int main()
{
  init();
  int n, q, c;
  cin>>n>>q>>c;
  for(int i=1; i<=n; ++i)
  {
    int x, y, s;
    cin>>x>>y>>s;
    dp[x][y][s]++;
  }
  for(int i=1; i<=100; ++i)
  {
    for(int j=1; j<=100; ++j)
    {
      for(int k=0; k<=c; ++k) dp[i][j][k] = dp[i-1][j][k]+dp[i][j-1][k]-dp[i-1][j-1][k];
    }
  }
  for(int i=0; i<q; ++i)
  {
    int t, xs, ys, xe, ye;
    cin>>t>>xs>>ys>>xe>>ye;
    int ans = 0;
    for(int j=0; j<c; ++j)
    {
      int b = (t+j)%(c+1);
      ans += b*(dp[xe][ye][j]-dp[xs-1][ye][j]-dp[xe][ys-1][j]+dp[xs-1][ys-1][j]);
    }
    cout<<ans<<Endl;
  }
  //system("PAUSE");
  return 0;
}
