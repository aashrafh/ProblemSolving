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
#include <stdio.h>
#include <string.h>
#define Endl "\n"
#define ll long long
#define F first
#define S second
#define inf 0x3f3f3f3f3f3f3f3fll
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[]={-1,-1,0,1,1,1,0,-1};
int dy[]={0,1,1,1,0,-1,-1,-1};
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int n, x, t, p;
vector<int> a;
int main()
{
  init();
  cin>>n;
  p = -1000000001;
  ll ans = 0;
  for(int i=0; i<n; ++i) {
    cin>>x;
    if(x == p) t++;
    else t = 1;
    ans += t;
    p = x;
  }
  cout<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
