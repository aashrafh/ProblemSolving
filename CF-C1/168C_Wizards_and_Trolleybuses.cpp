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
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
double n, a, d, t, v;
double time[100005];
int main()
{
  init();
  cin>>n>>a>>d;
  for(int i=0; i<n; ++i)
  {
    cin>>t>>v;
    time[i] = t;
    if((v*v/(2*a)) >= d) time[i] += sqrt(2*d/a);
    else
    {
      time[i] += sqrt(2*(v*v/(2*a))/a);
      time[i] += (d-(v*v/(2*a)))/v;
    }
  }

  for(int i=1; i<n; ++i) if(time[i] < time[i-1]) time[i] = time[i-1];
  for(int i=0; i<n; ++i) printf("%lf\n",time[i]);
  //system("PAUSE");
  return 0;
}
