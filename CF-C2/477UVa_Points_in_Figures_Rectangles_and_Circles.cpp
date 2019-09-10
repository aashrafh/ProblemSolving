#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
struct shape{
  char t;
  double x1, y1, x2, y2, r;
};
shape a[11];
int main()
{
  init();
  char c;
  int n = 0;
  while((c = getchar()) != '*') {
    a[n].t = c;
    if(c == 'r') scanf("%lf%lf%lf%lf", &a[n].x1, &a[n].y1, &a[n].x2, &a[n].y2);
    else scanf("%lf%lf%lf", &a[n].x1, &a[n].y1, a[n].r);
    n++;
    getchar();
  }

  double x, y;
  bool valid = false;
  int i = 0;
  while(scanf("%lf%lf", &x, &y) && x != 9999.9&&y != 9999.9) {
    valid =  false;
    i++;
    for(int j = 0; j<n; ++j) {
      if(a[j].t == 'r') if(x > a[j].x1&&x < a[j].x2&&y<a[j].y1&&y > a[j].y2){
        valid = true;
      }
      else {
        double d = (x - a[j].x1)*(x - a[j].x1) + (y - a[j].y1)*(y - a[j].y1);
        if(d < a[j].r*a[j].r){
          valid = true;
        }
      }
      if(valid) printf("Point %d is contained in figure %d\n", i, j+1);
    }
    if(!valid) printf("Point %d is not contained in any figure\n", i);
  }
  return 0;
}
