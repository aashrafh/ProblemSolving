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
pair<LL, LL> a[100005];
LL ans;
LL sum[100005];
int main()
{
  init();
  int n, d;
  cin>>n>>d;
  for(int i=0; i<n; ++i) cin>>a[i].F>>a[i].S;
  sort(a, a+n);

  for(int i=0; i<n; ++i) sum[i+1] = sum[i] + a[i].S;

  int  r = 0;
  for(int l = 0; l < n; ++l)
  {
    while(r < n && a[r].F < a[l].F+d) r++;
    ans = max(ans, sum[r]-sum[l]);
  }
  cout<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
