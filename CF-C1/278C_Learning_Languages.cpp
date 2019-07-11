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
const int MAX = 500;
int p[MAX];
int find(int x)
{
  if(p[x] == x) return x;
  return p[x] = find(p[x]);
}
void union(int x, int y)
{
  p[find(x)] = find(y);
}
int main()
{
  init();
  int n, m;
  cin>>n>>m;
  for(int i=0; i<n+m+1; ++i) p[i] = i;
  bool f = false;
  for(int i=0; i<n; ++i)
  {
    int k;cin>>k;
    if(k) f = true;
    for(int j=0; j<k; ++j)
    {
      int x;
      cin>>x;
      union(i, n+x-1);
    }
  }
  if(!f)
  {
    cout<<n<<Endl;
    continue;
  }
  set<int> s;
  for(int i=0; i<n; ++i)
  {
    s.insert(find(i));
  }
  cout<<s.size()-1<<Endl;
  //system("PAUSE");
  return 0;
}
