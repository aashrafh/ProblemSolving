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
const int INF = 1e9+7;
const int MAXN = int (2e5+7);

int n, dp[MAXN][4], a[MAXN];

int main () {
   	//freopen("input.in", "r", stdin);
   	//freopen("output.txt", "w", stdout);

   	cin >> n;
   	for(int i = 1; i <= n; i ++)
   		cin >> a[i];
   	for(int i = 1; i <= n; i ++)
   		for(int j = 0; j < 4; j ++)
   			dp[i][j] = INF;
   	for(int i = 1; i <= n; i ++) {
   		dp[i][0] = min(dp[i][0], min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2]))) + 1;
   		if(a[i] == 1 || a[i] == 3)
   			dp[i][1] = min(dp[i][1], min(dp[i - 1][0], dp[i - 1][2]));
   		if(a[i] == 2 || a[i] == 3)
   			dp[i][2] = min(dp[i][2], min(dp[i - 1][0], dp[i - 1][1]));
   	}
   	cout << min(dp[n][0], min(dp[n][1], dp[n][2]));
   	return 0;
}
