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

int x[1005], y[1005], r[1005];
int n;
int blanket(int X, int Y)
{
	for(int i=0; i<n; ++i)
	{
		if(((X-x[i])*(X-x[i])+(Y-y[i])*(Y-y[i])) <= r[i]*r[i])
			return 0;
	}
	return 1;
}
int main()
{
  init();
  int X1, Y1, X2, Y2;
  cin>>X1>>Y1>>X2>>Y2;
  cin>>n;
  for(int i=0; i<n; ++i) cin>>x[i]>>y[i]>>r[i];
  int ans = 0;
  for(int i=min(X1, X2); i<=max(X1, X2); ++i)
	  ans+=blanket(i, Y1)+blanket(i, Y2);
  for(int i=min(Y1, Y2)+1; i<max(Y1, Y2); ++i)
	  ans+=blanket(X1, i)+blanket(X2, i);
  cout<<ans<<Endl;
  return 0;
}
