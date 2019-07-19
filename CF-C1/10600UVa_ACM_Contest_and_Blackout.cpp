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
struct edge {
  int x, y, c, e;
};
edge E[10005];
bool comp(edge a, edge b){
  return a.c < b.c;
}
int P[105], R[105];
int find(int x)
{
  return x == P[x] ? x : P[x]=find(P[x]);
}
void ini(int n)
{
  static int i;
    for(int i = 0; i <= n; i++)
        P[i] = i, R[i] = 1;
}
bool joint(int x, int y)
{
  x = find(x), y = find(y);
    if(x != y) {
        if(R[x] > R[y])
            R[x] += R[y], P[y] = x;
        else
            R[y] += R[x], P[x] = y;
        return 1;
    }
    return 0;
}
int main()
{
  init();
  int t, n, m, x, y, c;
  cin>>t;
  while(t--){
    cin>>n>>m;
    for(int i=0; i<m; ++i)
    {
      cin>>x>>y>>c;
      E[i].x = x; E[i].y = y; E[i].c = c; E[i].e = 0;
    }
    sort(E, E+m, comp);
    int cost = 0, ontree[n+1], idx = 0;
    ini(n);
    for(int i = 0; i < m; i++) {
            if(joint(E[i].x, E[i].y)) {
                cost += E[i].c;
                ontree[idx++] = i;
            }
        }
    cout<<cost<<" ";
    int mincost = 0xfffffff;
        for(int i = 0; i < idx; i++) {
            cost = 0;
            E[ontree[i]].e = 1;
            ini(n);
            int cnt = 0;
            for(int j = 0; j < m; j++) {
                if(!E[j].e && joint(E[j].x, E[j].y)) {
                    cost += E[j].c;
                    cnt++;
                }
            }
            E[ontree[i]].e = 0;
            if(mincost > cost && cnt == n-1)
                mincost = cost;
        }
        cout<<mincost<<Endl;
  }
  //system("PAUSE");
  return 0;
}
