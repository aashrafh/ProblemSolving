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
string s[10];
int n, k;
int id[10];
int convert(int i) {
  int x = 0;
  for(int j=0; j<k; ++j) {
    x = x*10 + s[i][id[j]]-'0';
  }
  return x;
}
int main()
{
  init();
  cin>>n>>k;
  for(int i=0; i<n; ++i) cin>>s[i];
  for(int i=0; i<k; ++i) id[i] = i;
  int ans = 1e9;
  do {
    int mx = convert(0);
    int mn = mx;
    for(int i=1; i<n; ++i) {
      int x = convert(i);
      mx = max(mx, x);
      mn = min(mn, x);
    }
    ans = min(ans, mx-mn);
  }while(next_permutation(id, id+k));
  cout<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
