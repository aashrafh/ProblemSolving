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
LL power(int n, int p)
{
  LL ans = n;
  for(int i=2; i<=p; ++i) ans *= n;
  return ans;
}
int main()
{
  init();
  LL x;
  int length;
  while(scanf("%lf", &x) && x)
  {
    if(x < 0) length = sqrt(-1*x), x *= -1;
    else length = sqrt(x);
    bool printed = false;
    length = sqrt (x);
            for ( int i = 2; i <= length; i++ ) {
                long long ans = i;
                int p = 2;
                while ( ans < x ) {
                    ans = power (i, p);
                    p++;
                }
                if ( ans == x ) {
                    printf ("%d\n", p - 1);
                    printed = true;
                    break;
                }
            }

            if ( !printed ) printf ("1\n");
  }
  //system("PAUSE");
  return 0;
}
