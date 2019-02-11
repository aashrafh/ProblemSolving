#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;

  string s;
  cin>>s;
  for(int i=1; i<n-1; ++i)
  {
    if(s[i] == '0')
    {
      if(s[i-1]=='1')
      {
        s.erase(s.begin()+i);
        s.erase(s.begin()+(i-1));
      }
      else if(s[i+1]=='1')
      {
        s.erase(s.begin()+i);
        s.erase(s.begin()+(i+1));
      }
    }
  }
  cout<<s.size()<<endl;
}
