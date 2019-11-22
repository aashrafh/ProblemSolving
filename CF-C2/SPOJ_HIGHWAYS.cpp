#include <bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  int t; cin>>t;
  while(t--){
    int n, m, s, e; cin>>n>>m>>s>>t;
    s--; t--;
    vector<vector<pair<int, int>>> adj(n);
    vector<int> d(n, 1e9);
    vector<bool> vis(n, false);
    for(int i=0; i<m; ++i) {
      int x, y, v;
      cin>>x>>y>>v;
      x--; y--;
      adj[x].push_back(make_pair(v, y));
      adj[y].push_back(make_pair(v, x));
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push(make_pair(0, s));
    d[s] = 0;
    while(!q.empty()){
      pair<int, int> p = q.top(); q.pop();
      int v = p.second;
      if(vis[v]) continue; vis[v] = true;
      if(v == t) break;
      for(int i=0; i<adj[v].size(); i++) {
        int new_d = p.first + adj[v][i].first;
        if(new_d < d[adj[v][i].second]) {
          d[adj[v][i].second] = new_d;
          q.push(make_pair(new_d, adj[v][i].second));
        }
      }
    }
    if(d[t] < 1e9) cout<<d[t]<<"\n";
    else cout<<"NONE\n";
  }
  return 0;
}
