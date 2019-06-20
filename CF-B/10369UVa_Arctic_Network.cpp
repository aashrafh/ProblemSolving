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
//DSU
/*
int deg[10005];
int par[10005];
int find(int x)
{
  if(par[x] == x) return x;
  else return par[x] = find(par[x]);
}
void make_union(int x, int  y)
{
  x = find(x);
  y = find(y);
  par[y] = x;
}*/
//DSU
class DSU {
public:
	int n;
	vector<int> rank;
	vector<int> parent;

	DSU(int n) : rank(100), parent(100)
	{
		this->n = n;
		rank.resize(n);
		parent.resize(n);
		makeSet();
	}
	void makeSet()
	{
		for (int i = 0; i < n; i++) {
			parent[i] = i;
		}
	}
	int find(int x)
	{
		if (parent[x] != x) {
			parent[x] = find(parent[x]);
		}
		return parent[x];
	}

	void Union(int x, int y)
	{
		int xset = find(x);
		int yset = find(y);
		if (xset == yset)
			return;
		if (rank[xset] < rank[yset]) {
			parent[xset] = yset;
		}
		else if (rank[xset] > rank[yset]) {
			parent[yset] = xset;
		}
		else {
			parent[yset] = xset;
			rank[xset] = rank[xset] + 1;
		}
	}

};
struct edge {
	int x, y;
	double w;

	bool operator < (const edge& e)
	{
		return w < e.w;
	}
};
double dst(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}
const int MX = 800;
double X[MX], Y[MX];
vector<edge> costs;
int main()
{
	init();
	int t;
	cin >> t;
	while (t--)
	{
		costs.clear();
		int n, m;
		cin >> n;
		DSU dsu(n + 5);
		for (int i = 1; i <= m; ++i)
		{
			cin >> X[i] >> Y[i];
			for (int j = 1; j < i; ++j)
			{
				edge e;
				e.w = dst(X[i], Y[i], X[j], Y[j]);
				e.x = i;
				e.y = j;
				costs.push_back(e);
			}
		}
		sort(costs.begin(), costs.end());
		double ans = 0.0;
		for (int i = 0; i < costs.size(); ++i)
		{
			if (dsu.find(costs[i].x) != dsu.find(costs[i].y))
			{
				ans += costs[i].w;
				dsu.Union(costs[i].x, costs[i].y);
				cout << costs[i].x << " " << costs[i].y << Endl;
			}
		}
    cout<<ans<<Endl;
	}
	cout << Endl;
	system("PAUSE");
	return 0;
}
