#include<bits/stdc++.h>
using namespace std;

int n;
char grid[30][30];
bool seen[30][30];
int Xs[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int Ys[8] = {0, -1, -1, -1, 0, 1, 1, 1};

bool valid_point(int i, int j) {return i>=0 && j>=0 && i<n && j<n;}

void solve(int i, int j)
{
  if(seen[i][j]) return;

  seen[i][j] = 1;

  for(int k=0; k<8; ++k)
  {
    int x = Xs[k]+i;
    int y = Ys[k]+j;

    if(valid_point(x,y) && !seen[x][y] && grid[x][y] == '1') solve(x, y);
  }
}

int main()
{
  int Img = 1;
  while(scanf("%d", &n) != EOF)
  {
    for(int k=0; k<n; ++k)
    {
      scanf("%s",grid[k]);
    }

    memset(seen,0,sizeof(seen));
    int ans = 0;
    for(int i=0; i<n; ++i)
    {
      for(int j=0; j<n; ++j)
      {
        if(!seen[i][j] && grid[i][j] == '1')
        {
          solve(i, j);
          ans++;
        }
      }
    }
    printf("Image number %d contains %d war eagles.\n",Img++,ans);
  }
}
