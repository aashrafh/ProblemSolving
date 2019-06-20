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
map<string, string> p;
map<string, int> r;
string find(string x)
{
	if (p[x] != x) {
		p[x] = find(p[x]);
	}
	return p[x];
}
int Union(string x, string y)
{
	string xset = find(x);
	string yset = find(y);
	if (xset == yset) return max(r[xset], r[yset]);
	if (r[xset] > r[yset]) swap(xset, yset);
	p[xset] = yset;
	if (r[xset] <= r[yset])r[yset] += r[xset];
	return max(r[xset], r[yset]);
}
int main()
{
	init();
	int t;
	cin >> t;
	while (t--)
	{
		p.clear();
		r.clear();
		int n;
		cin >> n;
		string x, y;
		for (int i = 0; i < n; ++i)
		{
			cin >> x >> y;
			if (p.count(x) == 0)
			{
				p[x] = x;
				r[x] = 1;
			}
			if (p.count(y) == 0)
			{
				p[y] = y;
				r[y] = 1;
			}
			cout << Union(x, y) << Endl;
		}
	}
	//cout << Endl;
	system("PAUSE");
	return 0;
}
