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
int memo[1005][1005], t;
string s;

int best(int i, int j)
{
  if(i >= j) return 0;

  int &ret = memo[i][j];
  if(ret != -1) return ret;

  ret = best(i+1, j-1) + (s[i] != s[j]);
  ret = min(ret, best(i+1, j)+1);
  ret = min(ret, best(i, j-1)+1);

  return ret;
}

int main()
{
  init();
  cin>>t;
  int cs = 1;
  while(t--)
  {
    cin>>s;
    memset(memo, -1, sizeof memo);
    cout<<"Case "<<cs++<<": "<<best(0, s.size()-1)<<Endl;
  }
  //system("PAUSE");
  return 0;
}
