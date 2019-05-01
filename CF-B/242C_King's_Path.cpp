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
int n;
bool valid_row(int r, int c, vector< vector<int> > w)
{
  for(int i=0; i<n; ++i)
  {
    int row = w[i][0];
    if(r == row)
    {
      for(int j=w[i][1]; j<=w[i][2]; ++j)
      {
        if(c == j) return true;
      }
    }
  }
  return false;
}
bool valid(int r, int c, vector< vector<int> > w)
{
  return (r<8 && r>=0 && c<8 && c>=0 && valid_row(r, c, w));
}
int BFS(pair<int, int> src, pair<int, int> dist, map<pair<int, int> , int > adj)
{
  queue< pair<int, int> > q;
  q.push(src);
  adj[src] = 0;
  while(!q.empty())
  {
    pair<int, int> p = q.front();
    q.pop();
    if(p == dist) return adj[p];
    for(int i=0; i<8; ++i)
    {
      pair<int, int> np = make_pair(p.first+dx[i], p.second+dy[i]);
      if(adj.find(np) != adj.end() && adj[np] == -1)
      {
          adj[np] = adj[p]+1;
          q.push(np);
      }
    }
  }
  return -1;
}
int main()
{
  init();
  int x0, y0, x1, y1;
  cin>>x0>>y0>>x1>>y1;
  //x0--; y0--; x1--; y1--;
  cin>>n;
  map<pair<int, int> , int > adj;
  for(int i=0; i<n; ++i)
  {
    int r, a, b;
    cin>>r>>a>>b;
    for(int i=a; i<=b; ++i)
    {
      adj[make_pair(r, i)] = -1;
    }
  }
  cout<<BFS(make_pair(x0, y0), make_pair(x1, y1), adj)<<Endl;
  return 0;
}
