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
int a[100005];
int main()
{
  init();
  int s, l, k=0;
  cin>>s>>l;
  for(int i = l; i>=1; --i)
  {
    LL x = i&(-i);
    if(s-x < 0) continue;
    a[k++] = i; s-=x;
  }
  if(s) cout<<-1<<Endl;
  else {
    cout<<k<<Endl;
    for(int i=0; i<k; ++i) cout<<a[i]<<" ";
    cout<<Endl;
  }
  //system("PAUSE");
  return 0;
}
