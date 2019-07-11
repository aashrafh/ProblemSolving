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
  double s, x, y;
  cin>>s>>x>>y;
  double dst = abs(y-x);
  double t1, t2;
  cin>>t1>>t2;
  double v1 = 1.0/t1, v2 = 1.0/t2;
  double pos, d;
  cin>>pos>>d;
  if(x>y)
  {
    x = s-x;
    y = s-y;
    pos = s-pos;
    d = d*-1;
  }
  double Igor = dst*t2;
  double tram;
  if(d == -1) tram = pos+x;
  else if(pos <=x) tram = x - pos;
  else tram = 2*s - (pos - x);
  cout<<min(Igor, (tram+dst)*t1)<<Endl;
  //system("PAUSE");
  return 0;
}
