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
int a[100005], pos[100005], n;
int main()
{
  init();
  cin>>n;
  for(int i=0; i<n; ++i)
  {
    cin>>a[i];
  }

  int idx = 0;
  for(int i=1; i<=n/3; ++i)
  {
    if(n%i==0) pos[idx++] = i;
  }

  for(int i=0; i<idx; ++i)
  {
    for(int j=0; j<pos[i]; ++j)
    {
      bool valid = true;
      for(int k=j; k<n && valid; k+=pos[i])
      {
        if(a[k] == 0) valid = false;
      }
      if(valid)
      {
        cout<<"YES\n";
        return 0;
      }
    }
  }
  cout<<"NO\n";
  //system("PAUSE");
  return 0;
}
