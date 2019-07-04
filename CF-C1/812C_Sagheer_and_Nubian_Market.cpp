#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#include<bits/stdc++.h>
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

LL a[100100], b[100100], n, s, t;
bool check(int k)
{
  for(int i=0; i<n; ++i) b[i] = a[i]+1LL*(i+1)*k;
  sort(b, b+n);
  t = 0;
  for(int i=0; i<k; ++i) t+=b[i];
  return t <= s;
}
int main()
{
  init();
  cin>>n>>s;
  for(int i=0; i<n; ++i) cin>>a[i];
  int l = 0, r = n+1;
  while(r-l > 1)
  {
    int mid = (r+l)/2;
    if(check(mid)) l = mid;
    else r = mid;
  }
  assert(check(l));
  cout<<l<<" "<<t<<Endl;
  //system("PAUSE");
  return 0;
}
