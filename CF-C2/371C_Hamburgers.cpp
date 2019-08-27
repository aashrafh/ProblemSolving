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
int rb, rs, rc;
int nb, ns, nc;
int pb, ps, pc;
ll r;
bool valid(ll x) {
  ll cost = 0;
  cost += max(rb*x-nb, 0LL)*pb;
  cost += max(rs*x-ns, 0LL)*ps;
  cost += max(rc*x-nc, 0LL)*pc;
  return cost<=r;
}
int main()
{
  init();
  string s;
  cin>>s;
  for(int i=0; i<s.size(); ++i) {
    if(s[i]=='B') rb++;
    else if(s[i] == 'S') rs++;
    else rc++;
  }
  cin>>nb>>ns>>nc;
  cin>>pb>>ps>>pc;
  cin>>r;
  ll l=0, r=1e13;
  while(r-l > 1) {
    ll mid = (l+r)/2;
    if(valid(mid)) l = mid;
    else r = mid;
  }
  cout<<l<<Endl;
  //system("PAUSE");
  return 0;
}
