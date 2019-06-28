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
  LL n, x, a, b;
  cin>>n>>a>>b;
  for(int i=0; i<n; ++i)
  {
    cin>>x;
    LL money = x*a / b;
    LL tokens = money*b / a;
    if((money*b)%a > 0) tokens++;
    cout<<x-tokens<<" ";
  }
  cout<<Endl;
  //system("PAUSE");
  return 0;
}
