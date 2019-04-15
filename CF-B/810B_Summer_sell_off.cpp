#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#define Endl "\n"
#define LL long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  LL n, f;
  cin>>n>>f;
  LL ans = 0;
  vector<LL> a;
  for(size_t i = 0; i < n; ++i)
  {
    LL x, y; cin>>x>>y;
    ans += min(x, y);
    a.push_back(min(2*x, y) - min(x, y));
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  for(size_t i = 0; i<f; ++i) ans+=a[i];
  cout<<ans<<Endl;
  return 0;
}
