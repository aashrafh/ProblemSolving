#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#define endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  int n, l;
  cin>>n>>l;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin>>a[i];

  sort(a.begin(), a.end());
  int ans = max(a[0], l-a[n-1])*2;
  for(int i=0; i<n-1; ++i) ans = max(ans, a[i+1]-a[i]);
  cout.precision(20);
  cout << fixed << ans / 2.0 << endl;
  return 0;
}
