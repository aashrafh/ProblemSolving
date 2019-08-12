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
#include <unordered_set>
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
int main()
{
  int t, n, Case = 0;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        printf("Case #%d: %d", ++Case, n);
        int i, cnt = 0;
        for(i = 2; cnt < 2; i++) {
            if(n%i == 0) {
                printf(" = %d * %d", i, n/i);
                cnt++;
            }
        }
        puts("");
    }
    return 0;
}
