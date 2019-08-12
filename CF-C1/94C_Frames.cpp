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
int main()
{
  init();
  int n, m, a, b;
  cin>>n>>m>>a>>b;
  a--;
  b--;
  if(a/m == b/m) cout<<1<<Endl;
  else if (a%m==0 && (b+1)%m==0) cout<<1<<Endl;
	else if (b+1==n)
	{
		if (a%m==0) cout<<1<<Endl;
		else cout<<2<<Endl;
	}
	else if (a%m==0 || (b+1)%m==0) cout<<2<<Endl;
	else if (a/m + 1 == b/m) cout<<2<<Endl;
	else if ((b%m)+1 == a%m) cout<<2<<Endl;
	else cout<<3<<Endl;
  //system("PAUSE");
  return 0;
}
