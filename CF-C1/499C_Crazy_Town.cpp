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
  int x, y, a, b;
  cin>>x>>y>>a>>b;
  int n; cin>>n;
  int ans = 0;
  for(int i=0; i<n; ++i)
  {
    int a1, b1, c1;
    cin>>a1>>b1>>c1;
    int l1 = a1*x+b1*y+c1, l2 = a1*a+b1*b+c1;
    if((l1>0&&l2<0) || (l1<0&&l2>0)) ans++;
  }
  cout<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
