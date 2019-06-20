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
char a[105][105];
int main()
{
  init();
  int n, k;
  cin>>n>>k;
  for(int i=0; i<n; ++i) for(int j=0; j<n; ++j) a[i][j] = 'S';
  for(int i=0; i<n; ++i)
  {
    if(i&1)
    {
      for(int j=1; j<n && k > 0; j+=2) a[i][j] = 'L', k--;
    }
    else for(int j=0; j<n && k > 0; j+=2) a[i][j] = 'L', k--;
  }
  if(k)
  {
    cout<<"NO\n";
    return 0;
  }
  cout<<"YES\n";
  for(int i=0; i<n; ++i) cout<<a[i]<<Endl;
  cout<<Endl;
  return 0;
}
