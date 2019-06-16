#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#define Endl "\n"
#define LL long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int deg[10005];
int par[10005];
int find(int x)
{
  if(par[x] == x) return x;
  else return par[x] = find(par[x]);
}
void make_union(int x, int  y)
{
  x = find(x);
  y = find(y);
  par[y] = x;
}
int main()
{
  init();
  int n, m;
  cin>>n>>m;
  for(int i=0; i<n; ++i) par[i] = i;
  for(int i=0; i<m; ++i)
  {
    int x, y;
    cin>>x>>y;
    x--;
    y--;
    deg[x]++;
    deg[y]++;
    make_union(x, y);
  }
  long long ans = 1;
  for(int i=0; i<n; ++i)
  {
    if(deg[i] == 0) continue;
    if(par[i] != i) ans*=2;
  }
  cout<<ans<<Endl;
  return 0;
}
