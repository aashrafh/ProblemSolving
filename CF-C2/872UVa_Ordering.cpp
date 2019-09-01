#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int t;
char a, b, c;
vector<char> sym;
vector<vector<char>> adj;
map<char, bool> vis;
string s;
stringstream ss;

bool valid(char ch) {
  for(int i=0; i<adj[ch].size(); ++i) if(vis[adj[ch][i]]) return false;
  return true;
}

bool dfs(string p) {
  if(p.size() == sym.size()) {
    for(int i=0; i<p.size(); ++i) cout<<p[i]<<" ";
    cout<<"\n";
    return true;
  }
  bool ans = false;
  for(int i=0; i<sym.size(); ++i) {
    if(!vis[sym[i]]) {
      if(valid(sym[i])) {
        vis[sym[i]] = true;
        ans = dfs(p+sym[i]) || ans;
        vis[sym[i]] = false;
      }
    }
  }
  return ans;
}
int main()
{
  //init();
  scanf("%d\n\n", &t);
  while(t--) {
    getline(cin, s);
    ss.clear();
    ss.str(s);
    sym.clear();
    while(ss >> a) sym.push_back(a);
    sort(sym.begin(), sym.end());

    getline(cin, s);
    ss.clear();
    ss.str(s);
    adj.clear();
    adj.resize(26);
    while(ss >> a >> b >> c) adj[a].push_back(c);

    if(!dfs("")) cout<<"NO\n";
  }
  return 0;
}
