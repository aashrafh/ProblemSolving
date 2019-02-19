#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
  long long n;
  long long ans;
  cin>>n;
  if(n%2==0) ans = n/2;
  else ans = -1*(n+1)/2;
  cout<<ans<<"\n";
  return 0;
}
