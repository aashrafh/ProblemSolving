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
#include <cstdio>
#define Endl "\n"
#define LL long long
#define MAX 10000000
#define F first
#define S second
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
//int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
//int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
bool valid(int x, int y, int n, int m)
{
  return x>=0 && x<n && y>=0 && y<m;
}
queue<int> q;
void bfs(char grid[182][182], int dis[182][182], int x, int y, int n, int m)
{
  int i, j, a, b;
  dis[x][y] = 0;
  q.push(x);
  q.push(y);
  while(!q.empty()){
    i = q.front(); q.pop();
    j = q.front(); q.pop();
    for(int k=0; i<4; ++i)
    {
      a = i + dx[k];
      b = j + dy[k];
      if(valid(a, b, n, m) && dis[a][b] > dis[i][j] + 1 && grid[a][b] == '0')
      {
        q.push(a);
        q.push(b);
        dis[a][b] = dis[i][j] + 1;
      }
    }
  }
}
int main()
{
  init();
  char mat[182][182], ch;
	int t, r, c, dis[182][182];
	scanf("%d", &t);
	while(t--){
		scanf("%d%d%c", &r, &c, &ch);
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				scanf("%c", &mat[i][j]);
				dis[i][j] = MAX;
			}
			scanf("%c", &ch);
		}
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++){
				if(mat[i][j] == '1')
					bfs(mat, dis, i, j, r, c);
			}

		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++)
				printf("%d ", dis[i][j]);
			printf("\n");
		}
	}
  //system("PAUSE");
  return 0;
}
