#include <bits/stdc++.h>
using namespace std;

#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))
#define clr(v, d)		memset(v, d, sizeof(v))
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)	for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)	for(int i=(j);i>=(int)(n);--i)
typedef long long ll;

vector<vector<int>> graph;
vector<int> vis;

enum status {PATH = 0, CYCLE = 1};

// Find path or cycle
// We can use Find-Union Data structure to do that too
status dfs(int cur_node, int par_node, int &nodes_cnt)
{
	if(vis[cur_node])
		return CYCLE;

	vis[cur_node] = 1;

	for(auto child_node : graph[cur_node]) if(child_node != par_node)
	{
		++nodes_cnt;

		if(dfs(child_node, cur_node, nodes_cnt) == CYCLE)
			return CYCLE;
	}
	return PATH;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("test.txt", "rt", stdin);
#endif

	int n, m;

	cin>>n>>m;

	graph = vector<vector<int>>(n);
	vis = vector<int>(n);

	lp(i, m)
	{
		int x, y;
		cin>>x>>y;

		--x, --y;

		graph[x].push_back(y);
		graph[y].push_back(x);
	}

	int toRemove = 0;

	lp(i, n) if(!vis[i])
	{
		int cnt = 0;

		status solve = dfs(i, -1, cnt);

		if(solve == CYCLE)	// if odd cycle, remove 1
			toRemove += (cnt % 2 == 1);
	}
	// teams must be same size...if total odd, remove 1
	if( (n - toRemove) % 2 == 1)
		toRemove++;

	cout<<toRemove;


	return 0;
}
