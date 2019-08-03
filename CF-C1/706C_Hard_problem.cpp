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
#define inf 0x3f3f3f3f3f3f3f3fll
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int n, a[100005];
string s[100005], r[100005];
LL dp[100005][2];
int main()
{
  init();
  cin>>n;
  for(int i=1; i<=n; ++i) cin>>a[i];
  for(int i=1; i<=n; ++i)
  {
    cin>>s[i];
    r[i] = s[i];
    reverse(r[i].begin(), r[i].end());
    dp[i][0] = dp[i][1] = inf;
  }
  dp[1][0] = 0;
  dp[1][1] = a[1];
  for(int i=2; i<=n; ++i)
  {
    if(s[i] >= s[i-1]) dp[i][0] = dp[i-1][0];
    if(s[i] >= r[i-1]) dp[i][0] = min(dp[i][0], dp[i-1][1]);
    if(r[i] >= s[i-1]) dp[i][1] = dp[i-1][0] + a[i];
    if(r[i] >= r[i-1]) dp[i][1] = min(dp[i][1], dp[i-1][1]+a[i]);
  }
  LL ans = min(dp[n][0], dp[n][1]);
  if(ans == inf) cout<<-1<<Endl;
  else cout<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
