#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, t;
  cin>>n>>t;
  if(t==10)
  {
    if(n==1) cout<<-1<<endl;
    else
    {
      cout<<t;
      for(int i=0; i<n-2; ++i) cout<<0;
      cout<<endl;
    }
  }
  else
  {
    for(int i=0; i<n; ++i) cout<<t;
    cout<<endl;
  }
  return 0;
}
