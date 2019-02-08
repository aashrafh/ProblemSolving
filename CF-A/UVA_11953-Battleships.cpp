#include<bits/stdc++.h>
using namespace std;

int n;
char grid[105][105];
bool seen[105][105];
int Xs[4] = {1, 0, -1, 0};
int Ys[4] = {0, 1, 0, -1};

bool valid_point(int i, int j) {return i>=0 && j>=0 && i<n && j<n;}

void solve(int i, int j)
{
  if(seen[i][j] || grid[i][j] == '.') return;

  seen[i][j] = 1;

  for(int k=0; k<4; ++k)
  {
    int x = Xs[k]+i;
    int y = Ys[k]+j;

    if(valid_point(x,y) && !seen[x][y] && grid[x][y] != '.') solve(x, y);
  }
}

int main()
{
  int T, cs=1;
  cin>>T;
  while(T)
  {
    cin>>n;
    for(int i=0; i<n; ++i)
    {
      for(int j=0; j<n; ++j)
      {
        cin>>grid[i][j];
      }
    }

    memset(seen,0,sizeof(seen));
    int ans = 0;
    for(int i=0; i<n; ++i)
    {
      for(int j=0; j<n; ++j)
      {
        if(!seen[i][j] && grid[i][j] == 'x')
        {
          solve(i, j);
          ans++;
        }
      }
    }
    printf("Case %d: %d\n",cs,ans);
    cs++;
    T--;
  }
}
