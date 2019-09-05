#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int n, k, a[200];
int calc(int l, int r){
  vector<int> b, c;
  for(int i=l; i<=r; ++i) b.push_back(a[i]);
  for(int i=0; i<n; ++i){
    if(i<l || i>r) c.push_back(a[i]);
  }
  int s = min(k, min((int)b.size(), (int)c.size()));
  sort(b.begin(), b.end());
  sort(c.begin(), c.end(), greater<int>());
  int ans = 0;
  for(int i=l; i<=r; ++i) ans += a[i];
  int sum = ans;
  for(int i=0; i<s; ++i){
    sum -= b[i]-c[i];
    ans = max(sum, ans);
  }
  return ans;
}
int main()
{
  init();
  cin>>n>>k;
  for(int i=0; i<n; ++i) cin>>a[i];
  int ans = -1e9;
  for(int i=0; i<n; ++i){
    for(int j=i; j<n; ++j) ans = max(ans, calc(i, j));
  }
  cout<<ans<<Endl;
  return 0;
}
