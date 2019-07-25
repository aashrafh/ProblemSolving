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
int dp[10005][300];
int a[10005];
int n, k, t;

int solve(int i, int sum)
{
  if(i == n)
  {
    if(sum == 0) return 1;
    return 0;
  }

  int &ret = dp[i][sum];
  if(ret != -1) return ret;

  ret = solve(i+1, (((sum+a[i])%k + k)%k));
  ret |= solve(i+1, (((sum-a[i])%k + k)%k));

  return ret;
}

int main()
{
  init();
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    for(int i=0; i<n; ++i) cin>>a[i];
    memset(dp, -1, sizeof dp);
    int ret = solve(1, (a[0]+k)%k);
    if(ret) cout<<"Divisible\n";
    else cout<<"Not divisible\n";
  }
  //system("PAUSE");
  return 0;
}
