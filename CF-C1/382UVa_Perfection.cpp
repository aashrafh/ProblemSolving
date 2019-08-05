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

int main()
{
  int x;
	puts("PERFECTION OUTPUT");
	while(scanf("%d", &x) == 1 && x) {
		int i, j;
		int sum = 1, sq = (int)sqrt(x);
		for(i = 2; i <= sq; i++) {
			if(x%i == 0) {
				j = x/i;
				sum += i+j;
			}
		}
		printf("%5d  ", x);
		if(x == 1) 			puts("DEFICIENT");
		else if(sum == x)	puts("PERFECT");
		else if(sum < x)	puts("DEFICIENT");
		else				puts("ABUNDANT");
	}
	puts("END OF OUTPUT");
  return 0;
}
