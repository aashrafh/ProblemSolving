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
vector<LL> v;
void solve(LL n)
{
  v.push_back(n);
  if(n > 1000000000) return;
  solve(n*10+4);
  solve(n*10+7);
}
int main()
{
  init();
  solve(0);
  sort(v.begin(), v.end());
  v.resize(unique(v.begin(), v.end()) - v.begin());
  int n;
	cin >> n;
  cout<<lower_bound(v.begin(), v.end(), n)-v.begin()<<Endl;
  //system("PAUSE");
  return 0;
}
