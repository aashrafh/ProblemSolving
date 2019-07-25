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
int a[10005], n, m;
int main()
{
  init();
  while(true)
  {
    cin>>n>>m;
    if(!n && !m) break;
    for(int i=0; i<n; ++i)
    {
      int t;
      for(int j=0; j<m-1; ++j) cin>>t;
      cin>>t;
      a[i] = t;
    }

    LL sum = 0;
    for(int i=0; i<n; ++i)
    {
      sum += a[i];
    }

    for(int i=0; i<n; ++i)
    {
      LL x = a[i];
      if(x)
      {
        LL gcd = __gcd(x, sum);
        printf("%lld / %lld\n",x/gcd,sum/gcd);
      }
      else puts("0 / 1");
    }
  }
  //system("PAUSE");
  return 0;
}
