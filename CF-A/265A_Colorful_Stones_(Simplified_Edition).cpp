#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s, t;
  cin>>s;
  cin>>t;
  int pos=1, i=0, j=0;
  while(i<s.size()&&j<t.size())
  {
    if(s[i]==t[j])
    {
      pos++;
      j++;
      i++;
    }
    else
    j++;
  }
  cout<<pos<<endl;
  return 0;
}
