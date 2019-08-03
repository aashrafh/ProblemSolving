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
#define inf 0x3f3f3f3f3f3f3f3fll
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
const double EPS = 1e-9;
const int MAXN = 1e5 + 5;

char s[MAXN];
int n, p;

int code(char c) {
  return c - 'a';
}

int main() {
  scanf("%d%d\n", &n, &p);
  gets(s);
  --p;

  if  (p >= n / 2) {
    reverse(s, s + n);
    p = n - p - 1;
  }

  int res = 0;
  int r = -1;
  int l = n;
  for (int i = 0; i < n / 2; ++i) {
    if  (s[i] != s[n - i - 1]) {
      int c1 = code(s[i]);
      int c2 = code(s[n - i - 1]);

      res += min((c1 - c2 + 26) % 26, (c2 - c1 + 26) % 26);
      l = min(l, i);
      r = max(r, i);
    }
  }

  if  (0 <= l && r < n / 2 && l <= r) {
    if  (p < l) {
      res += r - p;
    } else if  (r < p) {
      res += p - l;
    } else {
      res += min(p - l + r - l, r - p + r - l);
    }
  }

  cout << res << endl;
	return 0;
}
