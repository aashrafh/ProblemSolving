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
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int a[600][600], w[600], h[600], n, m;
vector<int> p;
bool prime(int x)
{
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0) return false;
    return true;
}

int main()
{
  init();
  cin>>n>>m;
  for(int i=2; i<=200001; ++i) if(prime(i)) p.push_back(i);

  for(int i=1; i<=n; ++i)
  {
    for(int j=1; j<=m; ++j)
    {
      int x;
      cin>>x;
      vector<int>::iterator it;
      it = lower_bound(p.begin(), p.end(), x);
      int y = p[it-p.begin()];
      w[i] += (y-x);
      h[j] += (y-x);
    }
  }

  int ans = 100000000;
  for(int i=1; i<=n; ++i) ans = min(ans, w[i]);
  for(int i=1; i<=m; ++i) ans = min(ans, h[i]);

  cout<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
