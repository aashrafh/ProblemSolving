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
int main()
{
  init();
  LL n, d, m = 0;
  cin>>n>>d;
  if(n<10) cout<<n<<Endl;
  else
  {
    for(LL i=10; i<=n; i*=10)
    {
      if(n%i+1 == i) continue;
      if(n%i+1<=d) m = n%i+1;
      else break;
    }
    cout<<n-m<<Endl;
  }
  //system("PAUSE");
  return 0;
}
