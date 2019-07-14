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
  int a, b;
  cin>>a>>b;
  LL lcm = a*b/__gcd(a, b);
  LL x = lcm/a-1, y = lcm/b-1;
  if(x < y) x++;
  else y++;
  if (x == y) puts("Equal");
	else if (x > y) puts("Dasha");
	else puts("Masha");
  //system("PAUSE");
  return 0;
}
