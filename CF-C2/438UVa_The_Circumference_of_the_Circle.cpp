#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  double x1, y1, x2, y2, x3, y3;
  while(scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3 ) == 6) {
    double a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    double b = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    double c = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));

    double s = (a+b+c)/2;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    double d = (a*b*c)/(2*area);

    printf("%.2lf\n", d*3.141592653589793);
  }
  return 0;
}
