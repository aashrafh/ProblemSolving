#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
const ll inf = 1e18+5;
ll n, m, k;
ll c[101], cost[101][101], dp[105][105][105];
int solve(int idx, int b, int p){
  if(idx == n) return b==k?0:inf;
  ll &ret = dp[idx][b][p];
  if(ret!=-1) return ret;
  ret = inf;
  if(c[idx] != 0) ret = solve(idx+1, b+(p!=c[idx]), c[idx]);
  else{
    for(int i=1; i<=m; ++i) ret = min(ret, cost[idx][i]+solve(idx+1, b+(p!=i), i));
  }
  return ret;
}
int main()
{
  init();
  memset(dp, -1, sizeof dp);
  cin>>n>>m>>k;
  for(int i=0; i<n; ++i) cin>>c[i];
  for(int i=0; i<n; ++i) for(int j=1; j<=m; ++j) cin>>cost[i][j];
  ll ans = solve(0, 0, m+1);
  if(ans == inf) cout<<-1<<Endl;
  else cout<<ans<<Endl;
  return 0;
}
