#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
#include<cmath>
#define ll long long
#define Endl "\n"

using namespace std;

inline void init() { std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }

struct node
{
	int num;
	string str;
}dp[1010][1010];
char s[1010], c;
int n;
int main()
{
	int i, j, k, p;
	while (gets(s + 1))
	{
		n = strlen(s + 1);
		if (n == 0)
		{
			printf("\n");
			continue;
		}
		for (i = 1; i <= n; i++)
		{
			dp[i][i].num = 1;
			dp[i][i].str = s[i];
			dp[i][i - 1].str = "";
		}
		for (k = 1; k <= n; k++)
			for (i = 1; i + k <= n; i++)
			{
				j = i + k;
				dp[i][j].num = max(dp[i + 1][j].num, dp[i][j - 1].num);
				if (s[i] == s[j])
				{
					dp[i][j].num = max(dp[i][j].num, dp[i + 1][j - 1].num + 2);
					dp[i][j].str = s[i] + dp[i + 1][j - 1].str + s[i];
					continue;
				}
				if (dp[i][j].num == dp[i + 1][j].num && dp[i][j].num == dp[i][j - 1].num)
				{
					dp[i][j].str = min(dp[i + 1][j].str, dp[i][j - 1].str);
					continue;
				}
				if (dp[i][j].num == dp[i + 1][j].num)
					dp[i][j].str = dp[i + 1][j].str;
				else if (dp[i][j].num == dp[i][j - 1].num)
					dp[i][j].str = dp[i][j - 1].str;
			}
		cout << dp[1][n].str << endl;
	}
}