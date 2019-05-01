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
  int n;
  cin>>n;
  string s, gen = "ACTG";
  cin>>s;
  int ans = 1e5;
  for(int i=3; i<n; ++i)
  {
    string t = s.substr(i-3, 4);
    int tmp = 0;
    for(int j=0; j<4; ++j)
    {
      int d = t[j] - gen[j];
      if(d<0) d*=-1;
      tmp += min(d, 26-d);
    }
    ans = min(ans, tmp);
  }
  cout<<ans<<Endl;
  return 0;
}
