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
char A[200000];
char B[200000];
int n;
int C[200000];
int D[200000];
int main()
{
  init();
  scanf ("%d", &n);
  for (int i = 0; i < n; ++i) scanf ("%d %d", C + i, D + i);

  A[n] = 0;
  B[n] = 0;
  for (int i = 0; i < n/2; ++i) A[i] = B[i] = '1';
  for (int i = n/2; i < n; ++i) A[i] = B[i] = '0';

  int a = 0, b = 0;
  for (int i = 0; i < n; ++i) {
    if (C[a] < D[b]) {A[a] = '1'; ++a;}
    else {B[b] = '1'; ++b;}
  }

  printf("%s\n%s\n", A, B);
  //system("PAUSE");
  return 0;
}
