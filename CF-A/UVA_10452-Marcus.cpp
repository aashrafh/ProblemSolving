#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int m, n;
char grid[10][10];
string path = "IEHOVA#";
int Xs[3] = {-1, 0, 0};
int Ys[3] = {0, 1, -1};

bool valid(int i, int j)
{
  return i>=0 && j>=0 && i<m && j<n;
}

void print_dir(int i, int j)
{
  //cout<<" ";
  if(i==0 && j==-1) cout<<"left ";
  if(i==0 && j==1) cout<<"right ";
  if(i==-1 && j==0) cout<<"forth ";
}

void solve(int i, int j, int stop)
{
  if(stop >= path.size()) return;

  for(int k=0; k<3; ++k)
  {
    int x = Xs[k]+i;
    int y = Ys[k]+j;
    if(valid(x,y) && grid[x][y] == path[stop])
    {
      print_dir(Xs[k], Ys[k]);
      solve(x, y, stop+1);
    }
  }
}

int main()
{
  int ts;
  cin>>ts;
  while(ts)
  {
    int x, y;

    cin>>m;
    cin>>n;
    for(int i=0; i<m; ++i)
    {
      for(int j=0; j<n; ++j)
      {
        cin>>grid[i][j];
        if(grid[i][j] == '@')
        {
          x = i;
          y = j;
        }
      }
    }

    solve(x, y, 0);
    cout<<endl;
    ts--;
  }
}
