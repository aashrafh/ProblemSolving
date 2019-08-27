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
int n, k;
string s;
int a[5*100000+5];
int main()
{
  init();
  cin>>n>>k;
  for(int i=1; i<=n; ++i)
  {
    char ch; cin>>ch;
    a[i] = ch-'A';
  }
  if(n==1)
  {
    cout<<0<<Endl;
    for(int i=1; i<=n; ++i)
    {
      cout<<char(a[i]+'A');
    }
    cout<<Endl;
    return 0;
  }
  if(k>=3)
  {
    int ans = 0;
    a[n+1] = -1;
    for(int i=1; i<=n-1; ++i)
    {
      if(a[i] == a[i+1])
      {
        ans++;
        if(a[i]!=0 && a[i+2]!=0) a[i+1] = 0;
        else if(a[i]!=1 && a[i+2]!=1) a[i+1] = 1;
        else if(a[i]!=2 && a[i+2]!=2) a[i+1] = 2;
      }
    }
    cout<<ans<<Endl;
    for(int i=1; i<=n; ++i)
    {
      cout<<char(a[i]+'A');
    }
    cout<<Endl;
  }
  else
  {
    int aa=0, b=0;
    for(int i=1; i<=n; ++i) {
      if(i&1) {
        if(a[i]!=0) aa++;
      }
      else {
        if(a[i] != 1) aa++;
      }
    }
    for(int i=1; i<=n; ++i) {
      if(i&1) {
        if(a[i]!=1) b++;
      }
      else {
        if(a[i] != 0) b++;
      }
    }
    if(aa < b)
    {
      cout<<aa<<Endl;
      for(int i=1; i<=n; ++i) {
        if(i&1) cout<<'A';
        else cout<<'B';
      }
      cout<<Endl;
    }
    else {
      cout<<b<<Endl;
      for(int i=1; i<=n; ++i) {
        if(!(i&1)) cout<<'A';
        else cout<<'B';
      }
      cout<<Endl;
    }
  }
  //system("PAUSE");
  return 0;
}
