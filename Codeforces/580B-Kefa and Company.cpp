#include <bits/stdc++.h>
#define LLI long long int

using namespace std;

LLI max (LLI a, LLI b) {
	if (a > b ) {
		return a;
	} else {
		return b;
	}
}

int main () {
	LLI n, d;
	cin >> n >> d;
	vector <pair <LLI, LLI> > frnd;
	for (int i = 0; i < n; i++) {
		LLI m, s;
		cin >> m >> s;
		frnd.push_back (make_pair(m, s));
	}
	sort (frnd.begin(), frnd.end());
	vector<LLI> sum(n+1, 0);
	for (LLI i = 1; i <= n; i++) {
		sum[i] = sum[i-1] + frnd[i-1].second;
	}
	LLI ans = 0, j = 1;
	for (LLI i = 0; i < n; i++) {
		while ((j < n) && (frnd[i].first + d > frnd[j].first)) {
			j++;
		}
		ans = max (ans, sum[j] - sum[i]);
	}
	cout << ans << endl;
	return 0;
}
