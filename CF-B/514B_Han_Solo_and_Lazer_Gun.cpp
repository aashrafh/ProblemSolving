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
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false); }
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
const double INF = 1e5 + 9;
set<double> ans;
int main()
{
	init();
	int n, x, y;
	cin >> n >> x >> y;
	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		int a, b;
		cin >> a >> b;
		double Y = b - y;
		double X = a - x;
		if (X == 0) ans.insert(INF);
		else ans.insert(Y / X);
	}
	cout << ans.size() << Endl;
	return 0;
}
