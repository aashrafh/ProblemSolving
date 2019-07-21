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
LL a, b, c;
int main()
{
  init();
  cin>>a;
  if(a < 3)
  {
    cout<<-1<<Endl;
    return 0;
  }
  if(a%2 == 0)
  {
    b = (a/2)*(a/2)-1;
    c = (a/2)*(a/2)+1;
  }
  else
  {
    b = ((a*a)-1)/2;
    c = ((a*a)+1)/2;
  }
  cout<<b<<" "<<c;
  //system("PAUSE");
  return 0;
}
