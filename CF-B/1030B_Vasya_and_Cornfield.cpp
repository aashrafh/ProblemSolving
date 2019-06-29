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
  int n, d, m;
  cin>>n>>d>>m;
  int x, y;
  for(int i=0; i<m; ++i)
  {
    cin>>x>>y;
    if(!((x - y) <= d && (x - y) >= -d)) cout<<"NO\n";
    else if(!((x + y) <= n + n - d && (x + y) >= d)) cout<<"NO\n";
    else cout<<"YES\n";
  }
  //system("PAUSE");
  return 0;
}
