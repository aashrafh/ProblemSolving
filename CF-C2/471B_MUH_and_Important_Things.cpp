#include <bits/stdc++.h>
#define endn "\n"
#define ll long long
using namespace std;
vector<vector<pair<int, int>>> ans;
vector<pair<int, int>> a;
int f[3000];
int n;
int main()
{
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  cin>>n;
  for(int i=1; i<=n; ++i) {
    int x; cin>>x;
    f[x]++;
    a.push_back(make_pair(x, i));
  }
  int proc = proc;
  for(int i=0; i<n; ++i){
    if(f[a[i].first] > 1) {
      proc += (f[a[i].first]);
    }
  }
  if(proc < 3) cout<<"NO\n";
  else {
    cout<<"YES\n";
    sort(a.begin(), a.end());
    ans.push_back(a);
    int r = 2;
    for(int i=0; i<n-1; ++i) {
      if(r > 0){
        if(a[i].first == a[i+1].first){
          r--;
          swap(a[i], a[i+1]);
          ans.push_back(a);
        }
      }
      else break;
    }
    for(int i=0; i<3; ++i) {
      for(auto e : ans[i]){
        cout<<e.second<<" ";
      }
      cout<<endn;
    }
  }
  return 0;
}
