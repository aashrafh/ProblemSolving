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
int a[10];
bool valid, vis[10];
void solve(int sum, int idx)
{
  if(sum == 23 && idx == 5)
  {
    valid = true;
    return;
  }
  else
  {
    for(int i=0; i<5; ++i)
    {
      if(!vis[i])
      {
        vis[i] = true;
        solve(sum+a[i], idx+1);
        solve(sum-a[i], idx+1);
        solve(sum*a[i], idx+1);
        vis[i] = 0;
      }
    }
  }
}
int main()
{
  init();
  cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
  while(true)
  {
    if(a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0) break;

    for(int i=0; i<5; ++i)
    {
      vis[i] = true;
      solve(a[i], 1);
      vis[i] = false;
    }
    if(valid) cout<<"Possible\n";
    else cout<<"Impossible\n";
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
  }
  //system("PAUSE");
  return 0;
}
