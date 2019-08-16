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
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int val[600], edg[600][600];
int main()
{
  init();
  int n, m;
  cin>>n>>m;
  for(int i=1; i<=n; ++i) cin>>val[i];
  for(int i=1; i<=m; ++i)
  {
    int x, y, c;
    cin>>x>>y>>c;
    edg[x][y] = c;
  }
  double ans = 0.0;
  for(int i=1; i<=n; ++i)
  {
    for(int j=1; j<=n; ++j)
    {
      if(edg[i][j])
      {
        ans = max(ans, 1.0*(val[i]+val[j])/edg[i][j]);
      }
    }
  }
  printf("%.15f\n", ans);
  //system("PAUSE");
  return 0;
}
