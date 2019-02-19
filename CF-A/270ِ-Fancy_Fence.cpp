#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t)
  {
    int a;
    cin>>a;
    double N = 360.0/(180 - a);
    int n = 360/(180 - a);
    if(n == N) cout<<"YES\n";
    else cout<<"NO\n";
    t--;
  }
}
