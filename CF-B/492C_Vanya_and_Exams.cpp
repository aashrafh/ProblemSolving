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
#define F first
#define S second
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
LL n, r, avg;
pair<LL, LL> a[100010];
LL sum, ans;
int main()
{
  init();
  cin>>n>>r>>avg;
  for(LL i=0; i<n; ++i)
  {
    cin>>a[i].S>>a[i].F;
    sum += a[i].S;
  }
  sort(a, a+n);
  LL i = 0;
  while(sum < avg*n)
  {
    LL t = min(avg*n-sum,r-a[i].S);
    ans += t*a[i++].F;
    sum += t;
  }
  cout<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
