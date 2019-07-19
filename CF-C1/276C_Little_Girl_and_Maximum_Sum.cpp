#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#include<deque>
#include <cstdio>
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
LL a[200005], cnt[200006];
int n, q;
int main()
{
  init();
  cin>>n>>q;
  for(int i=0; i<n; ++i) cin>>a[i];
  sort(a, a+n);

  for(int i=0; i<q; ++i)
  {
    int x, y;
    cin>>x>>y;
    --x;
    cnt[x]++;
    cnt[y]--;
  }
  for(int i=0; i<n; ++i) cnt[i+1] += cnt[i];
  sort(cnt, cnt+n);

  LL ans = 0;
  for(int i=0; i<n; ++i) ans += a[i]*cnt[i];

  cout<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
