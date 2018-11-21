#include "bits/stdc++.h"
using namespace std;
int main()
{
  int n;
  cin>>n;
  long long int d;
  cin>>d;
  char ch;
  int x, cnt=0;
  for(int i=0; i<n; ++i)
  {
    cin>>ch;
    cin>>x;
    if(ch=='-')
    {
      if(x<=d)
      {
        d-=x;
      }
      else cnt++;
    }
    else  d+=x;
  }
  cout<<d<<" "<<cnt<<endl;
  return 0;
}
