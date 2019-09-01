#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int t, n, m, s, e, a, b, w;
vector<vector<pair<int, int>>> adjList;
vector<int> dist;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
int main()
{
  init();
  cin>>t;
  int cs = 1;
  while(t--) {
    cin>>n>>m>>s>>e;
    adjList.assign(n, vector<pair<int, int>>());
    for(int i=0; i<m ;++i) {
      cin>>a>>b>>w;
      adjList[a].push_back(make_pair(b, w));
      adjList[b].push_back(make_pair(a, w));
    }
    dist.assign(n, 1e9);
    dist[s] = 0;
    q.push(make_pair(0, s));
    while(!q.empty()) {
      pair<int, int> p = q.top(); q.pop();
      int d = p.first, v = p.second;
      if(d == dist[v]) {
        for(int i=0; i<adjList[v].size(); ++i) {
          pair<int, int> p = adjList[v][i];
          if(d+p.second < dist[p.first]) {
            dist[p.first] = d+p.second;
            q.push(make_pair(dist[p.first], p.first));
          }
        }
      }
    }
    if(dist[e] != 1e9) {
      cout<<"Case #"<<cs++<<": "<<dist[e]<<Endl;
    }
    else {
      cout<<"unreachable\n";
    }
  }
  return 0;
}
