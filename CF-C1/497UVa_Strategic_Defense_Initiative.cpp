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
#include <sstream>
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
char buf[256];
int  data[10000];
int  dp[10000];
int  front[10000];

void output( int d, int s )
{
	if ( front[s] >= s )
		printf("Max hits: %d\n",d+1);
	else
		output( d+1, front[s] );
	printf("%d\n",data[s]);
}

int main()
{
	int n;
	while (~scanf("%d",&n)) {
		getchar();
		getchar();
		while ( n -- ) {
			char ch;
			int count = 0;
			while (gets(buf) && buf[0])
				data[count ++] = atoi(buf);
			for ( int i = 0 ; i < count ; ++ i ) {
				dp[i] = 1;
				front[i] = i;
				for ( int j = 0 ; j < i ; ++ j )
					if ( data[i] > data[j] && dp[i] < dp[j]+1 ) {
						dp[i] = dp[j]+1;
						front[i] = j;
					}
			}

			int max = 0;
			for ( int i = 1 ; i < count ; ++ i )
				if ( dp[i] > dp[max] )
					max = i;

			if ( count )
				output( 0, max );
			else printf("Max hits: 0\n");
			if ( n ) printf("\n");
		}
	}
  //system("PAUSE");
  return 0;
}
