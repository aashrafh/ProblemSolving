#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  int N, A, B; cin >> N >> A >> B;

	if (B == 0 && A > 0) {
		if (N == A + B + 1) {
			cout << -1 << "\n";
			return 0;
		}
		cout << 1 << " ";
		--N;
	}
	cout << 1 << " ";
	for (int i = 1; i <= B; ++i)
		cout << (1 << i) << " ";

	for (int i = 1; i <= A; ++i)
		cout << (1 << B) + i << " ";

	for (int i = A + B + 2; i <= N; ++i)
		cout << 1 << " ";
  return 0;
}
