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
  int n, a, g, s1 = 0, s2 = 0;
  cin>>n;
  for(int i=0; i<n; ++i)
  {
    cin>>a>>g;
    if(abs(s1+a-s2) <= 500)
    {
      s1 += a;
      cout<<'A';
    }
    else
    {
      s2 += g;
      cout<<'G';
    }
  }
  cout<<Endl;
  //system("PAUSE");
  return 0;
}
