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
int n, d;
int a[100005], sum[100005], dp[100005];
string s;
int main()
{
  init();
  cin>>n>>d;
  for(int i=0; i<n; ++i) cin>>a[i];
  cin>>s;
  sum[0] = a[0];
  for(int i=1; i<n; ++i) sum[i] = sum[i-1]+a[i];

  dp[0] = (s[0]-'0')*a[0];
  for(int i=1; i<n; ++i)
  {
    dp[i] = max( (s[i]-'0')*sum[i-1],a[i]*(s[i]-'0')+dp[i-1]);
    dp[i] = max(dp[i],dp[i-1]);
  }
  cout<<dp[n-1]<<Endl;
  //system("PAUSE");
  return 0;
}
