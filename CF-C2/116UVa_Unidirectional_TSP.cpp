#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int r, c, grid[15][105], ans[15][105], cost[15][105];
int memo(int i, int j) {
  if(j >= c) return 0;

  int &ret = cost[i][j];
  if(ret != INT_MAX) return ret;

  int dr[3] = {i-1, i, i+1};
  if(i == 0) dr[0] = r-1;
  if(i == r-1) dr[2] = 0;

  for(int k=0; k<3; ++k) {
    int v = grid[i][j] + memo(dr[k], j+1);
    if(v < ret || (v == ret && ans[i][j] > dr[k])) {
      ret = v;
      ans[i][j] = dr[k];
    }
  }

  return ret;
}
int main()
{
  init();
  while(scanf("%d %d\n", &r, &c) == 2) {
    for(int i=0; i<r; ++i) {
      for(int j=0; j<c; ++j) {
        scanf("%d", &grid[i][j]);
        cost[i][j] = INT_MAX;
      }
    }

    int mini = INT_MAX, idx = 0;
    for(int i=0; i<r; ++i) {
      memo(i, 0);
      if(cost[i][0] < mini) {
        mini = cost[i][0];
        idx = i;
      }
    }

    for(int i=0; i<c; ++i) {
      printf(i == 0? "%d" : " %d", idx+1);
      idx = ans[idx][i];
    }
    printf("\n%d\n", mini);
  }
  return 0;
}
