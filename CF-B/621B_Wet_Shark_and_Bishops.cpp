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
map<int, int> add, sub;
int main()
{
  init();
  int n, x, y, ans = 0;
  cin>>n;
  for(int i=0; i<n; ++i)
  {
    cin>>x>>y;
    ans += add[x+y];
    add[x+y]++;

    ans += sub[x-y];
    sub[x-y]++;
  }
  cout<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
