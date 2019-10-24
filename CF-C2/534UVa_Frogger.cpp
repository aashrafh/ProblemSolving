#include <bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
void init() { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }
int n;
pair<double, double> a[300];
double dst[300], sx, sy, ex, ey;
double dist(int i, int j) {
  double x1 = a[i].first, y1 = a[i].second;
  double x2 = a[j].first, y2 = a[j].second;
  return sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
}
void ford() {
  int i, j, k;
  for(k = 1; k<n; ++k) {
    for(i = 0; i<n; ++i) {
      for(j = 0; j<n; ++j) {
        dst[i] = min(dst[i], max(dist(i, j), dst[j]));
      }
    }
  }
}
int main()
{
  init();
  int cs = 1;
  cin>>n;
  while(true) {
    if(!n) break;
    for(int i=0; i<n; ++i) cin>>a[i].first>>a[i].second;
    for(int i=0; i<n; ++i) dst[i] = (double) 1e9;
    dst[1] = 0.0;
    ford();
    cout<<"Scenario #"<<cs<<Endl<< "Frog Distance = ";
    cout << fixed << setprecision(3) << dst[0];
    cout<<Endl<<Endl;
    cs++;
    cin>>n;
  }
  return 0;
}
