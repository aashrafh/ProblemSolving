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
int isprime(int n) {
    static int i;
    static long long j;
    j = sqrt(n);
    if(n < 2)  return 0;
    for(i = 2; i <= j; i++)
        if(n%i == 0)
            return 0;
    return 1;
}
int main() {
    long long n, a, b;
    while(scanf("%lld", &n) == 1 && n) {
        a = isprime(n);
        b = isprime((1LL<<n)-1);
        if(a && b)
            printf("Perfect: %lld!\n", (1LL<<(n-1))*((1LL<<n)-1));
        else if(a && !b)
            puts("Given number is prime. But, NO perfect number is available.");
        else
            puts("Given number is NOT prime! NO perfect number is available.");
    }
    return 0;
}
