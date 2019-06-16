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
//DSU
/*
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
}*/
const LL MOD = 1000000007;
int main()
{
  init();
  LL n;
  cin>>n;
  LL total = 1, ban = 1;
  for(int i=0; i<3*n; ++i) total = (total*3)%MOD;
  for(int i=0; i<n; ++i) ban = (ban*7)%MOD;
  cout<<(total-ban+MOD)%MOD<<Endl;
  return 0;
}
