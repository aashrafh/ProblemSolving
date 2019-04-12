#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#define endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int n, m, sum[1011][1011];
int main()
{
  init();

  bool endLine = false;
  while(scanf("%d %d", &n, &m) != EOF)
  {
    for(int i=0; i<=n; ++i) sum[i][0] = sum[0][i] = 0;
    for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++) {
				scanf("%d", &sum[i][j]);
				sum[i][j] += sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
			}
		if (endLine) putchar('\n'); endLine = true;
		int totalSum = 0;
		for (int i = 1, k = n - m + 1; i <= k; i++)
			for (int j = 1; j <= k; j++) {
				int x = i + m - 1, y = j + m - 1;
				int ans = sum[x][y] - sum[i-1][y] - sum[x][j-1] + sum[i-1][j-1];
				printf("%d\n", ans);
				totalSum += ans;
			}
       printf("%d\n", totalSum);
  }
  return 0;
}
