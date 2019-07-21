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

int n, m, k, bl;
vector<vector<int>> adj;
vector<int> ans;
bitset<200> colored;
bool color[200];
void dfs(int idx)
{
  if(idx == n)
  {
    int b = 0, w  = 0;
    for(int i=0; i<n; ++i) if(color[i]) b++; else w++;
    if(b > bl)
    {
      ans.clear();
      bl = b;
      for(int i=0; i<n; ++i) if(color[i]) ans.push_back(i);
    }
    return;
  }

  bool black = true;
  for(int i=0; i<adj[idx].size(); ++i)
  {
    if(colored[adj[idx][i]] && color[adj[idx][i]])
    {
      black = false;
      break;
    }
  }

  colored.set(idx);
  if(black)
  {
    color[idx] = true;
    dfs(idx+1);
  }
  color[idx] = false;
  dfs(idx+1);
  colored.reset(idx);
}
int main()
{
  init();
  cin>>m;
  while(m--)
  {
    cin>>n>>k;
    adj.assign(n, vector<int>());
		colored.reset();
    bl = -1;
    for(int i=0; i<k; ++i)
    {
      int x, y;
      cin>>x>>y;
      x--;
      y--;
      adj[x].push_back(y);
      adj[y].push_back(x);
    }
    dfs(0);
    cout<<bl<<Endl;
    for(int i=0; i<ans.size(); ++i)
    {
      cout<<ans[i]+1<<" ";
    }
    cout<<Endl;
  }
  //system("PAUSE");
  return 0;
}
