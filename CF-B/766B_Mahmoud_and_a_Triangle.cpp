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
  LL n;
  cin>>n;
  vector<LL> a(n);
  for(int i=0; i<n; ++i) cin>>a[i];
  sort(a.begin(), a.end());
  for(int i=2; i<n; ++i)
  {
    if(a[i-2]+a[i-1] > a[i])
    {
      cout<<"YES\n";
      return 0;
    }
  }
  cout<<"NO\n";
  return 0;
}
