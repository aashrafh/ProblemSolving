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
#include <stdio.h>
#include <string.h>
#define Endl "\n"
#define ll long long
#define F first
#define S second
#define inf 0x3f3f3f3f3f3f3f3fll
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[]={-1,-1,0,1,1,1,0,-1};
int dy[]={0,1,1,1,0,-1,-1,-1};
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
double dp[1005][3015];
class  SimplifiedDarts {
    double  solve ( int  n,  int  p,  int  w,  int  p1,  int  p2) {
        if  (dp [n] [p]> = 0)  return  dp [n] [p];
        if  (n == 0) {
            if  (p> = w)  return  dp [n] [p] = 1.0;
            else return  dp [n] [p] = 0.0;
        }
  
        double  ret = p1 / 100.0 * solve (n-1, p + 2, w, p1, p2) + (100-p1) / 100.0 * solve (n-1, p, w, p1, p2);
        ret = max (ret, p2 / 100.0 * solve (n-1, p + 3, w, p1, p2) + (100-p2) / 100.0 * solve (n-1, p, w, p1, p2)) ;

        return  dp [n] [p] = ret;
    }

public :
    double  tryToWin ( int  W,  int  N,  int  P1,  int  P2) {
        memset (dp, -1,  sizeof (dp));

        return  solve (N, 0, W, P1, P2) * 100;
    }
};
int main()
{
  init();
  //system("PAUSE");
  return 0;
}
