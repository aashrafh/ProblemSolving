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
#define MOD 2000000011
long long mod_pow(long long a, int b){
    long long ret = 1;

    while(b){
        if(b & 1) ret = ret * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }

    return ret;
}

int main()
{
  init();
  int T,N;

    scanf("%d",&T);

    for(int tc = 1;tc <= T;++tc){
        scanf("%d",&N);
        printf("Case #%d: %lld\n",tc,N == 1? 1 : mod_pow(N,N - 2));
    }
  //system("PAUSE");
  return 0;
}
