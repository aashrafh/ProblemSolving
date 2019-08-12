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
int n, a[100010], aa, b, ans;
vector<pair<LL, LL>> v[100010];
void dfs(int i, LL dst)
{
  if(dst > a[i]) return;
  ans++;
  for(int k=0; k<v[i].size(); ++k)
  {
    dfs(v[i][k].first, max(dst+v[i][k].second, 0LL));
  }
}
int main()
{
  init();
  cin>>n;
  for(int i=0; i<n; ++i) cin>>a[i];
  for(int i= 1; i<n; ++i)
  {
    cin>>aa>>b;
    aa--;
    v[aa].push_back(make_pair(i, b));
  }
  dfs(0, 0);
  cout<<n-ans<<Endl;
  //system("PAUSE");
  return 0;
}
