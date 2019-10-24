#include <bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
void init() { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }
const int maxn = 1003;
const int maxm = 103;
int n, m, k;
int mat[maxn][maxm];
int main() {
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("%d\n", (m) * (m - 1) / 2);
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            if (k == 0) {
                printf("%d %d\n", i + 1, j + 1);
            }
            else {
                printf("%d %d\n", j + 1, i + 1);
            }
        }
    }
}
