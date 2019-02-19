#include<iostream>
using namespace std;
int main()
{
  int n, top;
  cin>>n>>top;
  int x,y;
  for(int i=0; i<n; ++i)
  {
    cin>>x>>y;
    if(x==top || x==7-top || y==top || y==7-top)
    {
      cout<<"NO\n";
      return 0;
    }
  }
  cout<<"YES\n";
}
