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
  int n, i, j;
  scanf("%*d");
    while(scanf("%d", &n) == 1) {
      int a[50] = {}, tmp;
      a[0] = 1;
      for(int i=2;; ++i)
      {
        for(int j=0; j<n; ++j)
        {
          tmp = a[j]+i;
               tmp = (int)sqrt(tmp);
               if(tmp*tmp == a[j]+i || a[j] == 0) {
                   a[j] = i;
                   break;
               }
        }
        if(j == n)  break;
      }
      printf("%d\n", i-1);
    }
  //system("PAUSE");
  return 0;
}
