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
int op[100005], col[5005], row[5005];
int n, m, k, OP, idx;
int main()
{
  init();
  cin>>n>>m>>k;
  for(int i=0; i<k; ++i)
  {
    cin>>OP>>idx>>op[i];
    if(OP == 1) row[--idx] = i;
    else col[--idx] = i;
  }
  for(int i=0; i<n; ++i)
  {
    for(int j=0; j<m; ++j)
    {
      cout<<max(row[i], col[j])<<" ";
    }
    cout<<Endl;
  }
  //system("PAUSE");
  return 0;
}
