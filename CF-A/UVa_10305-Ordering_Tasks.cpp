#include<bits/stdc++.h>
using namespace std;

bool vis[150];
vector< vector<int> > grid(150);
vector<int> ans;

void Top_Sort(int x)
{
  vis[x] = true;

  for(int i=0; i<(int)grid[x].size(); ++i)
  {
    int child = grid[x][i];
    if(!vis[child]) Top_Sort(child);
  }

  ans.insert(ans.begin(), x+1);
}

int main()
{
  int n, m, x, y;
	while (cin >> n >> m && n != 0) {
		grid.clear();
		ans.clear();
		memset(vis, false, sizeof vis);

		for (int i = 0; i < m; ++i) {
			cin >> x >> y;
			grid[x - 1].push_back(y - 1);
		}

		for (int i = 0; i < n; ++i)
			if (!vis[i])
				Top_Sort(i);

		for (int i = 0; i < (int)ans.size(); i++)
			cout << ans[i] << " \n"[i == (int)ans.size() - 1];
	}

	return 0;
}
