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
int main()
{
  init();
  int n, m;
  cin>>n>>m;
  vector<int> a[n];
  for(int i=1; i<=m; ++i)
  {
    int x, y;
    cin>>x>>y;
    a[x].push_back(y);
    a[y].push_back(x);
  }
  int ans = 0;
  while(true)
  {
    vector<int> unique;
    for(int i=1; i<=n; ++i)
    {
      if(a[i].size() == 1) unique.push_back(i);
    }

    for(int i=0; i<unique.size(); ++i)
    {
      int fr = a[unique[i]].front();
      a[unique[i]].clear();
      auto it = find(a[fr].begin(), a[fr].end(), unique[i]);
      a[fr].erase(it);
    }
    if(unique.size()) ans++;
    else break;
  }
  cout<<ans<<Endl;
  return 0;
}
