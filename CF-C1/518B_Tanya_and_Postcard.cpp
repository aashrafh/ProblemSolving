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
#include <cstdio>
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
string s;
int a[300], b[300];
int main()
{
  init();
  cin>>s;
  for(int i=0; i<s.size(); ++i) a[s[i]]++;
  cin>>s;
  for(int i=0; i<s.size(); ++i) b[s[i]]++;

  int x = 0;
  for(int i=0; i<300; ++i)
  {
    int j=min(a[i], b[i]);
    x+=j;
    a[i]-=j;
    b[i]-=j;
  }
  for(int i=0; i<26; a[i+'A']+=a[i+'a'], a[i+'a']=0, b[i+'A']+=b[i+'a'], b[i+'a']=0, i++);
  int y=0;
  for(int i=0; i<300; i++)
  {
    int j=min(a[i], b[i]);
    y+=j;
    a[i]-=j;
    b[i]-=j;
  }
  cout<<x<<" "<<y<<Endl;
  //system("PAUSE");
  return 0;
}
