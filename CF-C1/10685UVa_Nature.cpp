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
int R[5005], p[5005];
int findP(int x)
{
  return p[x] == x ? x : p[x] = findP(p[x]);
}
void Union(int x, int y)
{
  x = findP(x);
  y = findP(y);
  if(x != y)
  {
    p[x] = y;
    R[y] += R[x];
  }
}
map<string, int> mp;
int main()
{
  init();
  int c, r;
  cin>>c>>r;
  while(true)
  {
    if(c==0 && r==0) return 0;
    mp.clear();
    for(int i=0; i<c; ++i)
    {
      string s;
      cin>>s;
      mp[s] = i;
      R[i] = 1;
      p[i] = i;
    }
    for(int i=0; i<r; ++i)
    {
      string x, y;
      cin>>x>>y;
      int j = mp[x];
      int k = mp[y];
      Union(j, k);
    }
    int mx = -1;
    for(int i=0; i<c; ++i)
    {
      if(R[i] > mx) mx = R[i];
    }
    cout<<mx<<Endl;
    cin>>c>>r;
  }
  //system("PAUSE");
  return 0;
}
