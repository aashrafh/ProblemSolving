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
#include <bitset>
#include <cstdio>
#define Endl "\n"
#define LL long long
#define F first
#define S second
#define inf 0x3f3f3f3f3f3f3f3fll
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int n, a[200005], mn = inf, mx = -1*inf;
vector<int> v;
int main()
{
  init();
  cin>>n;
  for(int i=0; i<n; ++i)
  {
    cin>>a[i];
    mn = min(mn, a[i]);
  }
  for(int i=0; i<n; ++i)
  {
    if(a[i] == mn) v.push_back(i);
  }
  v.push_back(v[0]+n);
  LL ans = (LL)mn*(LL)n;
  for(int i=0; i<v.size()-1; ++i)
  {
    mx = max(mx, v[i+1]-v[1]-1);
  }
  ans += mx;
  cout<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
