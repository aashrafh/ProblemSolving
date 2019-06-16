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
int a, b;
int ans;
void divide(int div)
{
  int x = 0, y = 0;
  while(a % div == 0) {a /= div; ++x;}
  while(b % div == 0) {b /= div; ++y;}
  ans += abs(x - y);
}
int main()
{
  init();
  cin>>a>>b;
  divide(2), divide(3), divide(5);
  if(a == b) cout<<ans<<Endl;
  else cout<<-1<<Endl;
  return 0;
}
