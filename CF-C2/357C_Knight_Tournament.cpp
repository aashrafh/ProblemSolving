#include <bits/stdc++.h>
#define Endl "\n"
using namespace std;
void init() { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }
int a[300005];
int main()
{
  init();
  int n, m, l, r, x; cin>>n>>m;
  set<int> s;
  for(int i=1; i<=n; ++i) s.insert(i);
  vector<int> tmp;
  for(int i=0; i<m; ++i) {
    cin>>l>>r>>x;
    set<int>::iterator fi = s.lower_bound(l);
    set<int>::iterator la = s.upper_bound(r);
    tmp.clear();
    for(set<int>::iterator it = fi; it!=la; ++it) {
      if(*it != x) {
        a[*it] = x;
        tmp.push_back(*it);
      }
    }
    for(int i=0; i<tmp.size(); ++i) s.erase(tmp[i]);
  }
  for(int i = 1; i<=n; ++i) {
    cout<<a[i]<<" ";
  }
  cout<<Endl;
  return 0;
}
