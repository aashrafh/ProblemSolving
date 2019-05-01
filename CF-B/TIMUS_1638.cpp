#include<iostream>
using namespace std;
int main()
{
  int a, b, c, d;
  cin>>a>>b>>c>>d;
  if(c<=d) cout<<(d-c-1)*(a+2*b)+2*b<<endl;
  else cout<<(c-d+1)*(a+2*b)-2*b<<endl;
  return 0;
}
