int n;
int a[105];

int total;

int dp[105][50005];


int solve(int idx, int cur_sum) {
	if (idx == n) return abs(cur_sum - (total - cur_sum));
	int &ret = dp[idx][cur_sum];
	if (ret != -1) return ret;
	ret = min(solve(idx + 1, cur_sum), solve(idx + 1, cur_sum + a[idx]));
	return ret;
}


void clear() {
	total = 0;
	memset(dp, -1, sizeof dp);
}

int main() {
	init();


	int t;
	cin >> t;
	while (t--) {
		clear();
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			total += a[i];
		}
		cout << solve(0, 0) << endl;
	}

	return 0;
}
