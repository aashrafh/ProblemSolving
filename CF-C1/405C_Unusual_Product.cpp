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
int n, q, t, x;
bool mat[1005][1005];
string ans="";
LL sum;
int main()
{
  init();
  cin>>n;
  for(int i=1; i<=n; ++i) for(int j=1; j<=n; ++j) cin>>mat[i][j];
  for(int i=1; i<=n; ++i)
  {
    for(int j=1; j<=n; ++j)
    {
      sum += (mat[i][j]*mat[j][i]);
    }
  }
  sum = sum%2;
  cin>>q;
  while(q--)
  {
    cin>>t;
    if(t == 1 || t == 2)
    {
      cin>>x;
      sum ^= 1;
    }
    else
    {
      cout<<sum;
    }
  }
  cout<<Endl;
  //system("PAUSE");
  return 0;
}
