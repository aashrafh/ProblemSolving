#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
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
int main()
{
  init();
  string s;
  cin>>s;
  int n = s.size();
  int one = 0;
  for(int i=0; i<n; ++i) if(s[i] == '1') one++;

  int x = 0;
  for(int i=0; i<n; ++i)
  {
    if(s[i] == '0') x++;
    else if(s[i] == '1') x = x;
    else
    {
      for(int j = 0; j<x; ++j) cout<<'0';
      for(int j = 0; j<one; ++j) cout<<'1';
      x = 0;
      one = 0;
      cout<<'2';
    }
  }
  for(int j = 0; j<x; ++j) cout<<'0';
  for(int j = 0; j<one; ++j) cout<<'1';
  cout<<" \n";
  //system("PAUSE");
  return 0;
}
