#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x, iC, jC;
  for(int i=0; i<5; ++i)
  {
    for(int j=0; j<5; ++j)
    {
      cin>>x;
      if(x==1)
      {
        iC=i, jC=j;
      }
      else
      continue;
    }
  }
  cout<<(abs(iC-3)+abs(jC-3))<<endl;
return 0;
}
