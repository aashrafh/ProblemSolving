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
//int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
//int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
bool valid(int r, int c)
{
  return (r<8 && r>=0 && c<8 && c>=0);
}
int BFS(pair<int, int> src, pair<int, int> dist, vector< vector<int> > adj)
{
  queue< pair<int, int> > q;
  q.push(src);
  adj[src.first][src.second] = 0;
  while(!q.empty())
  {
    pair<int, int> p = q.front();
    q.pop();
    if(p == dist) return adj[p.first][p.second];
    for(int i=0; i<8; ++i)
    {
      pair<int, int> np = make_pair(p.first+dx[i], p.second+dy[i]);
      if(valid(np.first, np.second))
      {
        if(adj[np.first][np.second] == -1)
        {
          adj[np.first][np.second] = adj[p.first][p.second]+1;
          q.push(np);
        }
      }
    }
  }
  return -1;
}
char st1[5], st2[5];
int main()
{
  init();
  char c1, c2, r1, r2;
  while(scanf("%s%s", st1, st2) != EOF)
  {
    vector< vector<int> > adj(10, vector<int>(10, -1));
    cout<<"To get from "<<st1[0]<<st1[1]<<" to "<<st2[0]<<st2[1]<<" takes "
    <<BFS(make_pair(st1[1]-'1', st1[0]-'a'), make_pair(st2[1]-'1', st2[0]-'a'), adj)
    <<" knight moves.\n";
  }
  return 0;
}
