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
#define LL long long
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
struct node{
  int l, r, dir;
  LL c;
} t;
vector<node> v;
LL vis[401000];
bool comp(node a, node b)
{
  if(a.l == b.l) return a.dir < b.dir;
  return a.l < b.l;
}
int main()
{
  init();
  int n, x;
  cin>>n>>x;
  LL ans = inf;
  for(int i=0; i<n; ++i)
  {
    int l, r, c;
    cin>>l>>r>>c;
    t.c = c;
    t.l = l, t.r = r, t.dir = -1;
    v.push_back(t);
    t.l = r, t.r = l, t.dir = 1;
    v.push_back(t);
  }
  sort(v.begin(), v.end(), comp);
  for(int i=0; i<v.size(); ++i)
  {
    int time = abs(v[i].r-v[i].l)+1;
    if(time >= x) continue;
    if(v[i].dir == -1)
    {
      if(vis[x-time])
      {
        ans = min(ans, vis[x-time]+v[i].c);
      }
    }
    else
    {
      if(!vis[time]) vis[time] = v[i].c;
      else vis[time] = min(vis[time], v[i].c);
    }
  }
  if(ans == inf) cout<<-1<<Endl;
  else cout<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
