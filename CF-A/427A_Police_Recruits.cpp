#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, cnt=0, x, has=0;
  cin>>n;
  for(int i=0; i<n; ++i)
  {
    cin>>x;
    if(x>0) has+=x;
    else if(has>0)
    {
      has--;
    }
    else
    cnt++;
  }
  cout<<cnt<<endl;
  return 0;
}
