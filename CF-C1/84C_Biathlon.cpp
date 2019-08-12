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
struct circle{
  int x, r, idx;
};
bool operator < (const circle& c1, const circle& c2) {
	return c1.x < c2.x || (c1.x == c2.x && c1.idx < c2.idx);
}
bool in(circle& s, int x, int y)
{
  return ((s.x - x) * (s.x - x) + y * y) <= s.r * s.r;
}

int n, m, cnt;
vector<circle> a;
vector<pair<int, int>> b;

int bs(int x, int y)
{
  int l = 0, r = n-1, idx = n-1;
  while(l <= r)
  {
    int mid = (l+r)/2;
    if(a[mid].x > x)
    {
      idx = mid;
      r = mid-1;
    }
    else
    {
      l = mid+1;
    }
  }
  return idx;
}
int main()
{
  init();
  cin>>n;
  a.resize(n);
  for(int i=0; i<n; ++i)
  {
    cin>>a[i].x>>a[i].r;
    a[i].idx = i;
  }
  sort(a.begin(), a.end());
  vector<int> ans(n, -1);
  cin>>m;
  b.resize(m, pair<int, int>());
  int cnt = 0;
  for(int i=0; i<m; ++i)
  {
    int x, y;
    cin>>x>>y;
    int idx = bs(x, y);
    if(in(a[idx], x, y))
    {
      if(ans[a[idx].idx] == -1)
      {
        ans[a[idx].idx] = i+1;
        cnt++;
      }
    }
    if(idx+1 < n && in(a[idx+1], x, y))
    {
      if(ans[a[idx+1].idx] == -1)
      {
        ans[a[idx+1].idx] = i+1;
        cnt++;
      }
    }
    if(idx-1 >= 0 && in(a[idx-1], x, y))
    {
      if(ans[a[idx-1].idx] == -1)
      {
        ans[a[idx-1].idx] = i+1;
        cnt++;
      }
    }
  }
  cout<<cnt<<Endl;
  for(int i=0; i<n; ++i) cout<<ans[i]<<" ";
  cout<<Endl;
  //system("PAUSE");
  return 0;
}
