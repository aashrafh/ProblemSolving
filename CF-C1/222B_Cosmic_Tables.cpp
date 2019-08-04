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
int n, m, k, x, y;
int a[1005][1005], r[1005], c[1005];
char ch;
int main()
{
  init();
  cin>>n>>m>>k;
  for(int i=1; i<=n; ++i) for(int j=1; j<=m; ++j) cin>>a[i][j];
  for(int i=1; i<=n; ++i) r[i] = i;
  for(int i=1; i<=m; ++i) c[i] = i;
  for(int i=0; i<k; ++i)
  {
    cin>>ch>>x>>y;
    if(ch == 'c') swap(c[x], c[y]);
    else if(ch == 'r') swap(r[x], r[y]);
    else cout<<a[r[x]][c[y]]<<Endl;
  }
  //system("PAUSE");
  return 0;
}
