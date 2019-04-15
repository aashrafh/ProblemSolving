#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#define Endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
char a[105][105];
set<char> adj;
int main()
{
  init();
  int n, m;
  char c;
  cin>>n>>m>>c;
  for(int i=0; i<n; ++i)
     for(int j=0; j<m; ++j)
        cin>>a[i][j];

  for(int i=0; i<n; ++i)
      for(int j=0; j<m; ++j)
      {
        if(a[i][j] == c)
        {
          if(i!=0&&a[i-1][j]!=c)
                adj.insert(a[i-1][j]);
          if(i!=n-1&&a[i+1][j]!=c)
                adj.insert(a[i+1][j]);
          if(j!=0&&a[i][j-1]!=c)
                adj.insert(a[i][j-1]);
          if(j!=m-1&&a[i][j+1]!=c)
                adj.insert(a[i][j+1]);
        }
      }
      int x=0;
      if(adj.find('.')!=adj.end())
        x--;
      cout<<adj.size()+x<<Endl;
  return 0;
}
