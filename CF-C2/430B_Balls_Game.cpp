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
int main()
{
  init();
  int n, k, x;
  cin>>n>>k>>x;
  int c[n+5];
  int ans = 0;
  for(int i=1; i<=n; ++i) cin>>c[i];
  for(int i=0, l, r; i<n-1; ++i) {
    if(c[i]==x && c[i+1]==x) {
      l = i, r = i+1;
      while(true) {
        while(c[l] == c[l-1]) l--;
        while(c[r] == c[r+1]) r++;
        if(c[l-1] == c[r+1] && (c[l-1]==c[l-2] || c[r+1] == c[r+2])) r++, l--;
        else break;
      }
      ans = max(ans, r-l+1);
    }
  }
  cout<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
