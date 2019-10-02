#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int n;
pair<int, string> a[3005];
pair<string, int> ans[3005];
int main()
{
  init();
  cin>>n;
  for(int i=0; i<n; ++i) {
    cin>>a[i].second>>a[i].first;
  }
  sort(a, a+n);
  for(int i=0; i<n; ++i) {
    if(a[i].first > i) return cout<<-1, 0;
  }
  for(int i=0; i<n; ++i) {
    ans[i].first = a[i].second;
    ans[i].second = i+1-a[i].first;
    for(int j=0; j<i; ++j) if(ans[j].second >= i+1-a[i].first) ans[j].second++;
  }
  for(int i=0; i<n; ++i) cout<<ans[i].first<<" "<<ans[i].second<<Endl;
  return 0;
}
