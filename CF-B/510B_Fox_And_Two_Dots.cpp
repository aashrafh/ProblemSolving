#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#define Endl "\n"
#define LL long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
//int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
//int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
//
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

char grid[55][55];
int n, m;
bool valid = false;
char co;
bool vis[55][55];

void dfs(int x, int y, int px, int py, char c)
{
  if(x < 0 || x >= n || y < 0 || y >= m) return;
  if(grid[x][y] != c) return;
  if(vis[x][y])
  {
    valid = true;
    return;
  }

  vis[x][y] = true;
  for(int i=0; i<4; ++i)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(nx == px && ny == py) continue;
    dfs(nx, ny, x, y, c);
  }
}
int main()
{
  init();
  cin>>n>>m;
  for(int i=0; i<n; ++i) cin>>grid[i];

  for(int i=0; i<n ;++i)
  {
    for(int j=0; j<m; ++j)
    {
      if(!vis[i][j]) dfs(i, j, -1, -1, grid[i][j]);
    }
  }

  if(valid) cout<<"Yes\n";
  else cout<<"No\n";
  //system("PAUSE");
  return 0;
}
