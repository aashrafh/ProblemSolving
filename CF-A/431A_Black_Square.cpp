#include<bits/stdc++.h>
using namespace std;
map<int,int> a;
map<int, int> strip;
int main()
{
  int x, sum=0;
  for(int i=0; i<4; ++i)
  {
    cin>>x;
    a[i+1]=x;
  }
  string s;
  cin>>s;
  for(int i=0; i<s.size(); ++i)
  {
    if(s[i]=='1')
    {
      sum+=a[1];
    }
    else if(s[i]=='2')
    {
      sum+=a[
      2];
    }
    else if(s[i]=='3')
    {
      sum+=a[3];
    }
    else
    {
      sum+=a[4];
    }
  }
  cout<<sum<<endl;
  return 0;
}
