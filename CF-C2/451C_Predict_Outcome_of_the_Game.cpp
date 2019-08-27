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
  int t;
  cin>>t;
  while(t--) {
    ll n, k, d1, d2;
    cin>>n>>k>>d1>>d2;
    if(n%3 != 0) {
      cout<<"no\n";
      return 0;
    }
    bool done = false;
    for(int i=-1; i<=1; i+=2) {
      for(int j=-1; j<=1; j+=2) {
        ll D1 = i*d1;
        ll D2 = j*d2;
        ll X3 = (k-D1-D2)/3;
        if((k-D1-D2)%3!=0) continue;
        if(X3>=0 && X3<=k) {
          ll X1 = D1+D2+X3;
          ll X2 = k-X1-X3;
          if(X1>=0 && X1<=k && X2>=0 && X2<=k) {
            if(X1<=n/3 && X2<=n/3 && X3<=n/3) {
              if(abs(X1-X2)!= d1 || abs(X3-X2)!= d2) cout<<"no\n", done=true;
              else cout<<"yes\n", done=true;
            }
          }
        }
        if(done) break;
      }
      if(done) break;
    }
    if(!done) cout<<"no\n";
  }
  //system("PAUSE");
  return 0;
}
