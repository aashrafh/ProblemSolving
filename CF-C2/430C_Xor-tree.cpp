#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
vector<int> v[100005], a, b, ans;
int c[2];
int x, y;
void dfs(int s, int p, int g){
  if(c[g%2]%2){
    a[s] ^= 1;
  }
  if(a[s] != b[s]){
    ans.push_back(s);
    c[g%2]++;
  }
  for(auto e : v[s]){
    if(e != p) dfs(e, s, g+1);
  }
  if(a[s] != b[s]) c[g%2]--;
}
int main()
{
  init();
  int n; cin>>n;
  for(int i=1; i<=n-1; ++i) {
    cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
  }
  a.resize(n);
  b.resize(n);
  for(int i=1; i<=n; ++i) cin>>a[i];
  for(int i=1; i<=n; ++i) cin>>b[i];
  dfs(1, 1, 1);
  cout<<ans.size()<<Endl;
  for(auto e : ans) cout<<e<<Endl;
  return 0;
}
