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
int n, m;
char a[500][500];
bool good[500];
int main()
{
  init();
  cin>>n>>m;
  for(int i=1; i<=n; ++i) for(int j=1; j<=m; ++j) cin>>a[i][j];
  int ans = 0;
  for(int j=1; j<=m; ++j)
  {
    bool remove = false;
    for(int i=1; i<=n; ++i)
    {
      if(i+1 <=n && a[i][j] > a[i+1][j] && !good[i]) remove = true;
    }
    ans += remove;
    if(!remove)
    {
      for(int i=1; i<=n; ++i)
      {
        if(i+1 <=n && a[i][j] < a[i+1][j]) good[i] = true;
      }
    }
  }
  cout<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
