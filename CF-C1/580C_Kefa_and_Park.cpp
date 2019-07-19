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
int n, m;
int a[100005];
vector<int> e[100005];
int sum;
void dfs(int v, int p, int h)
{
  if(a[v]) h++;
  else h=0;
  if(h==m+1) return;
  bool valid = true;
  for(auto ed : e[v])
  {
    if(ed != p)
    {
      valid = false;
      dfs(ed, v, h);
    }
  }
  if(valid) sum++;
}
int main()
{
  init();
  cin>>n>>m;
  for(int i=0; i<n; ++i) cin>>a[i];
  for(int i=0; i<n-1; ++i)
  {
    int x, y;
    cin>>x>>y;
    x--; y--;
    e[x].push_back(y);
    e[y].push_back(x);
  }
  dfs(0, -1, 0);
  cout<<sum<<Endl;
  //system("PAUSE");
  return 0;
}
