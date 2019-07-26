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
LL dp[100005], a[100005], n;
int main()
{
  init();
  cin>>n;
  for(int i=0; i<n; ++i){int x; cin>>x; a[x]++;}
  dp[1] = a[1];
  for(int i=2; i<=100000; ++i) dp[i] = max(dp[i-1], dp[i-2]+a[i]*i);
  cout<<dp[100000]<<Endl;
  //system("PAUSE");
  return 0;
}
