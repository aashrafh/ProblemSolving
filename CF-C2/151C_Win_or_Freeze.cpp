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
vector<ll> divs;
bool isPrime(ll q)
{
  for(ll i=2; i*i<=q; ++i)
  {
    if(q%i==0) return false;
  }
  return true;
}
void g(ll q)
{
  while(q%2==0) divs.push_back(2), q/=2;
  for(ll i=3; i*i<=q; i+=2)
  {
    while(q%i==0) divs.push_back(i), q/=i;
  }
  if(q!=1) divs.push_back(q);
}
int main()
{
  init();
  ll q;
  cin>>q;
  g(q);
  if(divs.size() <= 1) cout<<"1\n0\n";
  else if(divs.size() == 2) cout<<2<<Endl;
  else
  {
    cout<<1<<Endl;
    cout<<divs[0]*divs[1]<<Endl;
  }
  //system("PAUSE");
  return 0;
}
