#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  char ch;
  string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
  string s, ans="";
  cin>>ch;
  cin>>s;
  if(ch=='R')
  {
    for(int i=0; i<s.size(); ++i)
    {
      for(int j=0; j<key.size(); ++i)
      {
        if(s[i]==key[j])
        ans+=key[j-1];
      }
    }
  }
  else if(ch=='L')
  {
    for(int i=0; i<s.size(); ++i)
    {
      for(int j=0; j<key.size(); ++i)
      {
        if(s[i]==key[j])
        ans+=key[j+1];
      }
    }
  }

  cout<<ans<<"\n";
}
