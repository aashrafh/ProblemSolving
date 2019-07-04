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
#include<bits/stdc++.h>
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
int main()
{
  init();
  int n;
 long long s;
 vector<int> a;

 scanf("%d", &n);
 a.resize(n);
 for (int i = 0; i < n; ++i) {
   scanf("%d", &a[i]);
 }
 sort(a.rbegin(), a.rend());
 s = 0;
 for (int m = 1; m <= n; m *= 4) {
   s += accumulate(a.begin(), a.begin() + m, 0LL);
 }
 cout << s << endl;

 return 0;
  //system("PAUSE");
  return 0;
}
