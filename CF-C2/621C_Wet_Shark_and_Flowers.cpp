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
#include<bits/stdc++.h>
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
ll p, X[100005], Y[100005];
double prob(ll x, ll y) {
  return (y/p-x/p)/(double)(y-x+1);
}
int main()
{
  init();
  int n; cin>>n>>p;
  for(int i=1; i<=n; ++i)
  {
    cin>>X[i]>>Y[i];
  }
  double ans = 0;
  for(int i=1; i<=n; ++i)
  {
    double p1 = prob(X[i], Y[i]);
    double p2 = prob(X[i%n+1], Y[i%n+1]);
    ans += (1-(1-p1)*(1-p2))*2000;
  }
  cout<<setprecision(10)<<fixed<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
