#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
double angle(double x1, double y1, double u1, double v1, double x2, double y2) {
  double dy1 = y1-v1;
  double dx1 = x1-u1;
  double dy2 = y1-y2;
  double dx2 = x1-x2;

  double ang = (acos((dx1*dx2 + dy1*dy2)/(sqrt((dx1*dx1 + dy1*dy1)*(dx2*dx2 + dy2*dy2))))*180) / 3.14159265;
  return min(ang, 360.0-ang);
}
int main()
{
  init();
  int n; cin>>n;
  double x1, y1, u1, v1, x2, y2, u2, v2;
  for(int i=0; i<n; ++i) {
    cin>>x1>>y1>>u1>>v1>>x2>>y2>>u2>>v2;
    double ang1 = angle(x1, y1, u1, v1, x2, y2);
    double ang2 = angle(x2, y2, u2, v2, x1, y1);
    double diff = ang1 - ang2;
    if(diff < 0) cout<<"Hero\n";
    else if(diff > 0) cout<<"Heroine\n";
    else cout<<0<<Endl;
  }
  return 0;
}
