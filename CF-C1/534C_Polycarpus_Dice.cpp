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
#define TAM		200100

typedef long long ll;

ll a[TAM], sum;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n >> sum;

	ll maxSum = 0;
	for ( int i = 0; i < n; ++i ) {
		cin >> a[i];
		maxSum += a[i];
	}

	for ( int i = 0; i < n; ++i ) {
		ll lo, hi;
		// ok + maxSum-a[i] >= sum
		// ok >= sum - (maxSum-a[i])
		lo = max ( 1LL, sum - (maxSum-a[i]) );
		// maxOK + n-1 = sum
		// maxOK = sum - (n-1)
		hi = min ( sum - ll(n-1), a[i] );
		cout << lo-ll(1) + a[i]-hi << ' ';
	}
	cout << '\n';

	return 0;

}
