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
  int n, a, b;
  cin>>n>>b>>a;
  int acc = a;
  vector<int> v(n);
  int x, ans = 0;
  for(int i=0; i<n;++i)
  {
    cin>>x;
    if(x == 0)
    {
      if(acc > 0) acc--;
      else if(b>0) b--;
      else break;
    }
    else
    {
      if(acc<a && b>0)
      {
        b--;
        acc++;
      }
      else if(acc>0) acc--;
      //else if(b>0) b--;
      else break;
    }
    ans++;
  }
  cout<<ans<<Endl;
  return 0;
}
