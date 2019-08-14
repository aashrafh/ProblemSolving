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
#include<bits/stdc++.h>
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
LL dp[20005];
LL a, b;
int main()
{
  init();
  cin>>a>>b;
  int cs = 1;
  while(true)
  {
    if(a==0 && b==0) return 0;
    LL ans = (a*(a-1)/2)*(b*(b-1)/2);
    //cout<<ans<<Endl;
    cout<<"Case "<<cs++<<": "<<ans<<Endl;
    cin>>a>>b;
  }
  //system("PAUSE");
  return 0;
}
