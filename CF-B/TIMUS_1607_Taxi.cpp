#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#define endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  int a, b, c, d;
  cin>>a>>b>>c>>d;
  int t = 0;
  while(true)
  {
    if(a+b*t >= c-d*t)
    {
      cout<<a+b*t<<endl;
      break;
    }
    if(a+b*(t+1) >= c-d*t)
    {
      cout<<c-d*t<<endl;
      break;
    }
    t++;
  }
  return 0;
}
