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
#include<bits/stdc++.h>
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
long double comp[105][105];
void PLAY()
{
  for(int i=0; i<=105; ++i)
  {
    comp[i][0] = 1;
  }
  for(int i=1; i<=105; ++i)
  {
    for(int j=1; j<=i; ++j) comp[i][j] = comp[i-1][j] + comp[i-1][j-1];
  }
}
int main()
{
  init();
  PLAY();
  int m, w, c;
  while(true)
  {
    scanf("%d %d %d", &m, &w, &c);
    if(m==0 && w==0) break;
    double pw = (1.0*w)/(w+m+0.0);
    double pm = 1-pm;
    double ans = 0.0;
    for(int i=0; i<=c; i+=2)
    {
      ans += comp[c][i]*pow(pm, i)*pow(pw, c-i);
    }
    cout<<setprecision(7)<<fixed<<ans<<Endl;
  }
  //system("PAUSE");
  return 0;
}
