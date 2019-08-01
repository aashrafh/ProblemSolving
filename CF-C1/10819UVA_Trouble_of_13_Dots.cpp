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
int m, n;
int p[105], f[105];
int dp[105][15000];

int solve(int i, int sum)
{
  if((sum>m && m < 1800) || (sum>m+200)) return -1000;
  if(i == n)
  {
    if(sum > m && sum <= 2000) return -1000;
    return 0;
  }

  if(dp[i][sum] != -1) return dp[i][sum];

  return dp[i][sum] = max(solve(i+1, sum), f[i]+solve(i+1, sum+p[i]));
}

int main()
{
  init();
  while(scanf("%d %d", &m, &n) == 2)
  {
    for(int i = 0; i < n; i++)
           scanf("%d %d", &p[i], &f[i]);
       memset(dp, -1, sizeof dp);

       printf("%d\n", solve(0, 0));
  }
  //system("PAUSE");
  return 0;
}
