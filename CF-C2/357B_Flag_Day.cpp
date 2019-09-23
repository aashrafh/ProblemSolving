#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int cnt[100005];
int main()
{
  init();
  int n, m; cin>>n>>m;
  for(int i=0; i<m; ++i) {
    int a, b, c; cin>>a>>b>>c;
    if(cnt[a]) {
      cnt[b] = cnt[a]%3+1;
      cnt[c] = cnt[b]%3+1;
    }
    else if(cnt[b]) {
      cnt[c] = cnt[b]%3+1;
      cnt[a] = cnt[c]%3+1;
    }
    else if(cnt[c]) {
      cnt[a] = cnt[c]%3+1;
      cnt[b] = cnt[a]%3+1;
    }
    else {
      cnt[a] = 1;
      cnt[b] = 2;
      cnt[c] = 3;
    }
  }
  for(int i=1; i<=n; ++i) {
    cout<<cnt[i]<<" ";
  }
  cout<<Endl;
  return 0;
}
