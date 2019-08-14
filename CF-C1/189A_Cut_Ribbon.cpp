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
int dp[5000], a[3];
int solve(int n)
{
  if(n==0) return 0;

  int &ret = dp[n];
  if(ret != -1) return ret;
  ret = -1000000;
  for(int i=0; i<3; ++i)
  {
    if(n >= a[i])
    {
      ret = max(ret, solve(n-a[i])+1);
    }
  }
  return ret;
}
int main()
{
  init();
  int n;
  cin>>n>>a[0]>>a[1]>>a[2];
  memset(dp, -1, sizeof dp);
  cout<<solve(n)<<Endl;
  //system("PAUSE");
  return 0;
}
