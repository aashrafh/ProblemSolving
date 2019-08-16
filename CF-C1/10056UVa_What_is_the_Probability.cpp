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
#include<bits/stdc++.h>
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
  init();
  int c, n, m;
  	double p;
  	cin >> c;
  	for (; c; c--) {
  		cin >> n >> p >> m;
  		int i = 1;
  		double common_fact = p * pow(1 - p, m - 1);
  		double previous = common_fact;
  		double current = previous + common_fact * pow(1 - p, n);
  		while (current - previous > 0.0000001) {
  			i++;
  			previous = current;
  			current = previous + common_fact * pow(1 - p, i * n);

  		}
  		printf("%.4f\n", current);
  	}
  //system("PAUSE");
  return 0;
}
