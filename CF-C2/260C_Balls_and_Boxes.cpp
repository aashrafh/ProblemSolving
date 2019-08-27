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
#include <stdio.h>
#include <string.h>
#define Endl "\n"
#define ll long long
#define F first
#define S second
#define inf 0x3f3f3f3f3f3f3f3fll
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[]={-1,-1,0,1,1,1,0,-1};
int dy[]={0,1,1,1,0,-1,-1,-1};
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int n, x;
long long a[100005];

int main() {
    cin >> n >> x;
    x--;
    for (int i = 0; i < n; ++ i) {
        cin >> a[i];
    }
    int minimum = *min_element(a, a + n);
    int y = x;
    while (a[y] != minimum) {
        y = (y + n - 1) % n;
    }
    long long turns = a[y];
    long long total = turns * n;
    for (int i = 0; i < n; ++ i) {
        a[i] -= turns;
    }
    for (int i = y; i != x; ) {
        i = (i + 1) % n;
        total ++;
        a[i] --;
    }
    a[y] = total;
    for (int i = 0; i < n; ++ i) {
        cout << a[i] << (i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
