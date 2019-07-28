#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#include<deque>
#include <bitset>
#include <cstdio>
#define Endl "\n"
#define LL long long
#define F first
#define S second
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int num[222222], a[222222];
int query[222222];

int main() {
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &num[i]);
		a[num[i]] = i;
	}
	for (int i = 1; i <= m; ++i) {
		scanf("%d", &query[i]);
	}
	long long answer = 0;
	for (int i = 1; i <= m; ++i) {
		int window = a[query[i]], ans = 0;
		if (window % k == 0) ans = window / k; else ans = window / k + 1;
		ans -= 1;
		if (window != 1) {
			int lWindow = num[window - 1];
			a[query[i]] = window - 1;
			a[lWindow] = window;
			swap(num[window - 1], num[window]);
		}
		ans += 1;
		answer += (long long)(ans);
	}
	cout << answer << endl;
	return 0;
}
