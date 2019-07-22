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
LL x, y, n, a[10];
const int MOD = 1000000007;
int main()
{
  init();
  cin>>x>>y>>n;
  a[1] = x%MOD;
  a[2] = y%MOD;
  a[3] = (y-x)%MOD;
  a[4] = (-1*x)%MOD;
  a[5] = (-1*y)%MOD;
  a[0] = (x-y)%MOD;

  cout<<(a[n%6]+MOD)%MOD<<Endl;
  //system("PAUSE");
  return 0;
}
