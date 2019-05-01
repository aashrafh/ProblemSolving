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
LL n, m;
bool valid(LL x, LL y)
{
  return (x>=1 && x<=n && y>=1 && y<=m);
}
int main()
{
  init();
  cin>>n>>m;
  LL x, y;
  cin>>x>>y;
  LL k;
  cin>>k;
  LL ans = 0;
  for(LL i=0; i<k; ++i)
  {
    LL l, r;
    cin>>l>>r;
    LL s = 0, low = 0, high = 1e9;
    while(low <= high)
    {
      LL mid = low + (high-low)/2;
      if(valid(x+(l*mid), y+(r*mid)))
      {
        s = mid;
        low = mid+1;
      }
      else high = mid-1;
    }
    ans+=s;
    x = x+(l*s);
    y = y+(r*s);
  }
  cout<<ans<<Endl;
  return 0;
}
