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
int change(int m, int d){
	int M[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int days = 0;
	for (int i = 0; i < m - 1; i++)
		days += M[i];
	return days + d;
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	while (scanf("%d", &n) == 1){
		int date[500] = { 0 }; // date[101] represents 1/1/2013
		for (int i = 0; i < n; i++){
			int m, d, p, t, tmp;
			scanf("%d%d%d%d", &m, &d, &p, &t);
			tmp = change(m, d) - 1 + 101;
			for (int j = tmp - 1; j >= tmp - t; j--)
				date[j] += p;
		}
		int max = 0;
		for (int i = 0; i < 500; i++){
			if (date[i] > max)
				max = date[i];
		}
		printf("%d\n", max);
	}
	return 0;
}
