#include<bits/stdc++.h>
using namespace std;

int n, m, ut, x;
vector< vector<int> > grid;
bool vis[100055];
vector<int> bosses;
int ans[100055];

void Topological_Sort(int stud)
{
  vis[stud] = true;
  for(int i=1; i<(int)grid[stud].size(); ++i)
  {
    int sub = grid[stud][i];
    if(!vis[sub]) Topological_Sort(sub);
  }

  bosses.push_back(stud);
}

int main()
{

  cin>>n>>m;
  grid.resize(n+1);
  for(int i=0; i<m; ++i)
  {
    cin>>ut;
    for(int j=0; j<ut; ++j)
    {
      cin>>x;
      grid[i].push_back(x);
    }
  }

  for(int i=1; i<=n; ++i)
  {
    if(!vis[i]) Topological_Sort(i);
  }

  int initial = 0;
  for(int i= n-1; i>=0; --i)
  {
    int tmp = bosses[i];
    ans[tmp] = initial;
    initial = tmp;
  }

  for(int i=1; i<=n; ++i)
  {
    cout<<ans[i]<<endl;
  }
  return 0;
}
