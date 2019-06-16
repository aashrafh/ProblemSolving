#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#define Endl "\n"
#define LL long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };

int compare(int a, int b, int c, int d)
{
  if(a==c && b==d) return 0;
  if(a*d > b*c) return 1;
  else return -1;
}
int main()
{
  init();
  int n, m;
  while (scanf("%d %d", &n, &m)!=EOF) {
        if (n==1 && m==1) break;
        int a = 0, b = 1, c = 1, d = 0;
        while (1) {
            int x = a + c, y = b + d;
            int cmp = Compare(n, m, x, y);
            if (cmp==0) break;
            if (cmp==1) {
                printf("R");
                a = x; b = y;
            }
            else {
                printf("L");
                c = x; d = y;
            }
        }
        printf("\n");
    }
  return 0;
}
