#include <bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
void init() { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }
int main()
{
  int n;
	ll k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0, j; i < n; i = j) {
		for (j = i; j < n && a[j] == a[i]; ++j)
			;
		if (k > (ll) (j - i) * n) {
			k -= (ll) (j - i) * n;
			continue;
		}
		for (int l = 0; l < n; ++l) {
			if (k <= (j - i)) {
				cout << a[i] << " " << a[l] << endl;
				return 0;
			}
			k -= j - i;
		}
	}
	return 0;
}
