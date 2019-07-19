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
  int t, n, p;
  cin>>t;
  while(t--)
  {
    cin>>n>>p;
    int x=1, y=2;
    for(int i=0; i<2*n+p; ++i)
    {
      cout<<x<<" "<<y;
      y++;
      if(y==n+1)
      {
        x++;
        y = x+1;
      }
    }
  }
  //system("PAUSE");
  return 0;
}
