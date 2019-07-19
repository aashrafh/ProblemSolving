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
#define F first
#define S second
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int main()
{
  init();
  int n, m;
  cin>>n>>m;
  char a[300006];
  cin>>a[0];
  int ans=0;
  for(int i=1; i<n; ++i)
  {
    cin>>a[i];
    if(a[i-1]=='.'&&a[i]=='.') ans++;
  }

  for(int i=0; i<m; ++i)
  {
    int idx;
    char c;
    cin>>idx>>c;
    idx--;
    if(a[idx] == '.' && c!='.' || a[idx] != '.' && c=='.')
    {
      if(c != '.')
      {
        if(idx>=1)
        {
          if(a[idx-1] == '.') ans--;
        }
        if(idx<n-1)
        {
          if(a[idx+1] == '.') ans--;
        }
      }
      else
      {
        if(idx>=1)
        {
          if(a[idx-1] == '.') ans++;
        }
        if(idx<n-1)
        {
          if(a[idx+1] == '.') ans++;
        }
      }
      a[idx] = c;
    }
    cout<<ans<<Endl;
  }
  //system("PAUSE");
  return 0;
}
