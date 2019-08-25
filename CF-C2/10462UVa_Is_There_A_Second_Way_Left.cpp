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
#include <stdio.h>
#include <string.h>
#define Endl "\n"
#define ll long long
#define F first
#define S second
#define inf 0x3f3f3f3f3f3f3f3fll
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[]={-1,-1,0,1,1,1,0,-1};
int dy[]={0,1,1,1,0,-1,-1,-1};
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
struct edge{
  int x, y, c, f;
};
edge E[100010];
bool cm(edge a, edge b){return a.c < b.c;}
int p[110], r[110];
void Play(int n)
{
  for(int i=0; i<=n; ++i) p[i]=i, r[i]=1;
}
int Find(int x)
{
  return x == p[x] ? x : p[x] = Find(p[x]);
}
int Union(int x, int y)
{
  x = Find(x);
  y = Find(y);
  if(x!=y)
  {
    if(r[x] > r[y])
    {
      r[x] += r[y];
      p[y] = x;
    }
    else
    {
      r[y] += r[x];
      p[x] = y;
    }
    return 1;
  }
  return 0;
}
int main()
{
  init();
  int t;
  cin>>t;
  int cs = 1;
  while(t--)
  {
    int v, e;
    cin>>v>>e;
    for(int i=0; i<e; ++i)
    {
      int x, y, c;
      cin>>x>>y>>c;
      E[i].x = x, E[i].y = y, E[i].c = c;
      E[i].f = 0;
    }
    sort(E, E+e, cm);
    int cost = 0, onTree[v+5], idx = 0;
    Play(v);
    for(int i=0; i<e; ++i)
    {
      if(Union(E[i].x, E[i].y))
      {
        cost += E[i].c;
        onTree[idx++] = i;
      }
    }
    if(idx != v-1)
    {
      cout<<"Case #"<<cs++<<" : No way\n";
      continue;
    }
    int mincost = 0xfffffff;
        for(int i = 0; i < idx; i++) {
            cost = 0;
            E[onTree[i]].f = 1;
            Play(v);
            int cnt = 0;
            for(int j = 0; j < e; j++) {
                if(!E[j].f && Union(E[j].x, E[j].y)) {
                    cost += E[j].c;
                    cnt++;
                }
            }
            E[onTree[i]].f = 0;
            if(mincost > cost && cnt == v-1) // cnt important
                mincost = cost;
        }
        if(mincost == 0xfffffff)
            cout<<"Case #"<<cs++<<" : No second way\n";
        else
         cout<<"Case #"<<cs++<<" : "<<mincost<<Endl;
  }
  //system("PAUSE");
  return 0;
}
