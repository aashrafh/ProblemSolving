#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
vector<pair<int, int>> g[100];
int dist[100];
int n, k;
int dijkstra() {
  //puts("dijkstra");
  memset(dist, -1, sizeof dist);
  dist[0] = 0;
  priority_queue<pair<int, int>> q;
  q.push(make_pair(0, 0));
  while(!q.empty()) {
    pair<int, int> p = q.top(); q.pop();
    int d = -1*p.first, cur = p.second;
    if(cur == k) return d;
    if(d == dist[cur]) {
      for(int i=0; i<g[cur].size(); ++i) {
        int to = g[cur][i].first;
        int dd = g[cur][i].second + d + 60;
        if( dd < dist[to] || dist[to] == -1) {
          dist[to] = dd;
          q.push(make_pair(-1*dd, to));
        }
      }
    }
  }
  return dist[k];
}
int main()
{
  init();
  int ans, ind;
  int T[5];
  int stops[105];
  string line;
  stringstream ss;
  while(scanf("%d %d", &n, &k) == 2) {
    //puts("LOOP");
    for( int i = 0; i < n; i++ )
        scanf("%d", &T[i]);
        //puts("IN2");
        getline(cin, line);//clear
        for( int i = 0; i < n; i++ ){
          //puts("IN3");
            getline(cin, line);
            ss.clear();
            ss << line;
            ind = 0;
            while(ss >> stops[ind++]);
            ind--;

            for( int x = 0; x < ind; x++ )
                for( int y = x + 1; y < ind; y++){
                  //puts("IN4");
                    g[ stops[x] ].push_back(pair<int, int>(stops[y], (stops[y] - stops[x])*T[i]));
                    g[ stops[y] ].push_back(pair<int, int>(stops[x], (stops[y] - stops[x])*T[i]));
                }
                //puts("IN5");
        }
    //puts("IN");
    ans = dijkstra();
    //puts("OUT");
    if(ans == -1) puts("IMPOSSIBLE");
    else {
      if(k != 0) ans -= 60;
      printf("%d\n", ans);
    }
    for(int i=0; i<100; ++i) g[i].clear();
  }
  return 0;
}
