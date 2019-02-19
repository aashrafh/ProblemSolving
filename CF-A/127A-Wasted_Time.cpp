#include<bits/stdc++.h>
using namespace std;

struct point
{
  double x;
  double y;
};

point Points[105];


int main()
{
  int n, k;
  cin>>n>>k;
  for(int i=0; i<n; ++i)
  {
    double X, Y;
    cin>>X>>Y;
    Points[i].x = X;
    Points[i].y = Y;
  }

  double sum = 0.000000;
  for(int i=0; i<n-1; ++i)
  {
    double len = sqrt(pow((Points[i].x - Points[i+1].x), 2)+pow((Points[i].y - Points[i+1].y), 2));
    sum += len;
  }

  sum *= k;
  double ans = sum/50.000000000;
  cout<<setprecision(10)<<ans<<endl;
}
