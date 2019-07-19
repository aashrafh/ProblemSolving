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
const int MAX = 20000;
string grid[1005][MAX];
int ans[1005][MAX];
int n, m, t;

int dfs(int r, int c)
{
  if(grid[r][c][0] != '=') return ans[r][c] = stoi(grid[r][c]);
  if(ans[r][c] != INT_MAX) return ans[r][c];

  int x=0, y=0, res=0;
  for(int i=1; i<=grid[r][c].size(); ++i)
  {
    if(isdigit(grid[r][c][i]))
    {
      x+=x*10+grid[r][c][i]-'0';
    }
    else if(isalpha(grid[r][c][i]))
    {
      y+=y*26+grid[r][c][i]-'A'+1;
    }
    else
    {
      res+=dfs(x, y);
      x = 0;
      y = 0;
    }
  }
  return ans[x][y] = res;
}
int main()
{
  init();
  cin>>t;
  while(t--)
  {
    cin>>m>>n;
    string s;
    memset(ans,0,sizeof(ans));
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>grid[i][j];
                ans[i][j]=INT_MAX;
            }
        }
    for(int i=1;i<=n;i++)
      {
                for(int j=1;j<=m;j++)
                    ans[i][j]=dfs(i,j);
      }
      for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(j!=m)
                    cout<<ans[i][j]<<" ";
                else
                    cout<<ans[i][j]<<endl;
            }
        }

  }
  //system("PAUSE");
  return 0;
}
