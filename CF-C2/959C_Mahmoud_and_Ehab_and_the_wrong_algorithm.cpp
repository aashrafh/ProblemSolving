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
  int n;
  cin>>n;
  if(n<6) cout<<-1<<Endl;
  else{
    for(int i=2; i<=4; ++i){
      cout<<1<<" "<<i<<Endl;
    }
    for(int i=5; i<=n; ++i){
      cout<<2<<" "<<i<<Endl;
    }
  }
  for(int i=2; i<=n; ++i){
    cout<<1<<" "<<i<<Endl;
  }
  //system("PAUSE");
  return 0;
}
