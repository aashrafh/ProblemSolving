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
char a[20][20];
bool vis[20][20];
int main()
{
  init();
  int n, m;
  cin>>n>>m;
  int cnt = 0;
  for(int i=0; i<n; ++i) cin>>a[i];
  for(int i=0; i<n; ++i)
  {
    for(int j=0; j<m; ++j)
    {
      if(a[i][j] == 'W')
      {
        if(a[i][j-1] == 'P' && !vis[i][j-1])
        {
          vis[i][j-1] = true;
          cnt++;
        }
        else if(a[i][j+1] == 'P' && !vis[i][j+1])
        {
          vis[i][j+1] = true;
          cnt++;
        }
        else if(a[i-1][j] == 'P' && !vis[i-1][j])
        {
          vis[i-1][j] = true;
          cnt++;
        }
        else if(a[i+1][j] == 'P' && !vis[i+1][j])
        {
          vis[i+1][j] = true;
          cnt++;
        }
        else continue;
      }
    }
  }
  cout<<cnt<<Endl;
  //system("PAUSE");
  return 0;
}
