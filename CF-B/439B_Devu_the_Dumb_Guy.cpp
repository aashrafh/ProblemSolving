#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#define Endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  long long int n, x, tmp;
  cin>>n>>x;
  vector<long long int> c;
  for(int i=0; i<n; ++i)
  {
    cin>>tmp;
    c.push_back(tmp);
  }
  sort(c.begin(), c.end());
  long long int ans = 0;
  for(int i=0; i<n; ++i)
  {
    ans += c[i]*x;
    if(x > 1) x--;
  }
  cout<<ans<<Endl;
  return 0;
}
