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
int t[1000010];
int n;

int main() {
	int ans=0;
	scanf("%d", &n);
	for(int i=1; i<=n; ++i) {
		int x; scanf("%d", &x);
		ans^=x;
	}
	t[0]=0;
	for(int i=1; i<=n; ++i) t[i]=t[i-1]^i;
	for(int i=1; i<=n; ++i) {
		int u=n/i;
		if(u%2!=0) {
			ans^=t[i-1];
		}
		ans^=t[n%i];
	}
	printf("%d\n", ans);
	return 0;
}
