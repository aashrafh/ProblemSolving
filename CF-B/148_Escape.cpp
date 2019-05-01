#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#define Endl "\n"
#define LL long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
const long double eps = 1e-12;
int main()
{
  init();
  long double p, d, t, f, c;
  cin>>p>>d>>t>>f>>c;
  if(p>=d)
  {
    cout<<0<<Endl;
    return 0;
  }
  long double total = t*p, ans = 0;
  while(total+eps < c)
  {
    long double DST = total / (d-p);
    DST *= d;
    if(DST+eps < c)
    {
      ans++;
      long double time = total / (d-p);
      total += time*2.0*p + f*p;
    }
    else break;
  }
  cout<<ans<<Endl;
  return 0;
}
