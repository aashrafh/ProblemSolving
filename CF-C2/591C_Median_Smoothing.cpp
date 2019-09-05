#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
const int N = (int) 5e5 + 5;
int a[N], b[N];
int main() {
	init();
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", a + i);
	int res = 0;
	for (int i = 1; i < n - 1; ++i) {
		if (a[i] == a[i - 1] || a[i] == a[i + 1])
			b[i] = a[i];
		else {
			int j = i;
			while (j < n - 1 && a[j] != a[j + 1])
				++j;
			res = max(res, (j - i + 1) / 2);
			for (int x = i; x < j; ++x) {
				if (x - i < j - x)
					b[x] = a[i - 1];
				else
					b[x] = a[j];
			}
			i = j - 1;
		}
	}
	b[0] = a[0];
	b[n - 1] = a[n - 1];
	printf("%d\n", res);
	for (int i = 0; i < n; ++i)
		printf("%d ", b[i]);
	return 0;

}
