#include <bits/stdc++.h>
#define endn "\n"
typedef __int64 ll;
using namespace std;
int main()
{
  ll k, b, n, t; cin>>k>>b>>n>>t;
  if(k==1){
    ll z = 1+n*b;
    for(int i=0; i<=n; ++i){
      if((t+i*b) >= z){
        cout<<i<<endn;
        return 0;
      }
    }
  }
  for(int i=0; i<=n; ++i) {
    if(log(k)*(n-i)<=log(1.0*((k-1)*t+b)/(k+b-1))) {
      cout<<i<<endn;
      return 0;
    }
  }
  return 0;
}
