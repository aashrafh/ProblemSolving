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
int main()
{
  init();
  int n, d;
  cin>>n>>d;
  int a[n+5];
  for(int i=0; i<n; ++i) cin>>a[i];
  LL ans = 0;
  for(int i=0, j=0; i<n; ++i)
  {
    while(j<n&&a[j]-a[i]<=d) j++;
    LL dst = j-i-1;
    ans += dst*(dst-1)/2;
  }
  cout<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
