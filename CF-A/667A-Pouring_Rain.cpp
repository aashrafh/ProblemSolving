#include<bits/stdc++.h>
using namespace std;
int main()
{
  int d, h, v, e;
  cin>>d>>h>>v>>e;
  double ans = 4*v/(d*d*3.141592653589793238462643383);
  if(ans > e) cout<<"YES\n"<<setprecision(13)<<(h*1.0/(ans-e))<<endl;
  else cout<<"NO\n";
}
