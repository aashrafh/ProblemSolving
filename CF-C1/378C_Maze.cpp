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
//int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
//int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
const int dx[4] = {-1, 0, 0, 1};
const int dy[4] = {0, -1, 1, 0};
int n, m, k;
char grid[505][505];
bool vis[505][505];

void dfs(int x, int y)
{
  if(x < 1 || x > n || y < 1 || y > m) return;
  if(vis[x][y] || grid[x][y] == '#') return;

  vis[x][y] = true;
  for(int i=0; i<4; ++i)
  {
    dfs(x+dx[i], y+dy[i]);
  }
  if(k > 0)
  {
    k--;
    grid[x][y] = 'X';
  }
}
int main()
{
  init();
  cin>>n>>m>>k;
  for(int i=1; i<=n; ++i) for(int j=1; j<=m; ++j) cin>>grid[i][j];
  for(int i=1; i<=n; ++i) for(int j=1; j<=m; ++j) if(grid[i][j] == '.') dfs(i, j);
  for(int i=1; i<=n; ++i)
  {
    for(int j=1; j<=m; ++j) cout<<grid[i][j];
    cout<<Endl;  
  }
  //system("PAUSE");
  return 0;
}
