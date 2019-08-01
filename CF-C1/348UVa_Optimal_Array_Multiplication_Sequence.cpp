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
#include<bits/stdc++.h>
#define Endl "\n"
#define LL long long
#define F first
#define S second
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int n;
int x[15], y[15];
int dp[15][15];
int dir[15][15];

int solve(int from, int to)
{
  if(from == to) return 0;

  int &ret = dp[from][to];
  if(ret != -1) return ret;

  ret = 1000000;
  for(int i=from; i<to; ++i)
  {
    int cost = solve(from, i) + solve(i+1, to) + x[from]*y[i]*y[to];
    if(cost < ret)
    {
      ret = cost;
      dir[from][to] = i;
    }
  }

  return ret;
}

void print(int from, int to)
{
  if(from == to) printf("A%d",from);
  else
  {
    printf("(");
    print(from , dir[from][to] );
    printf(" x ");
    print(dir[from][to]+1 , to );
    printf(")");
  }
}

int main()
{
  init();
  int cs = 1 ;
    while( scanf("%d",&n) && n ){
          for(int i=1; i<=n; ++i) cin>>x[i]>>y[i];
          memset(dp, -1, sizeof dp);
          solve(1,n);
          printf("Case %d: ",cs++);
          print(1,n);
          puts("");
    }
  //system("PAUSE");
  return 0;
}
