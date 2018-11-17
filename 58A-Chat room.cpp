#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  if(s.length()==5)
  cout<<"NO"<<endl;
  else{
  int j=0;
  string hello = "hello";
  for(int i=0; i<s.length(); ++i)
  {
    if(s[i]==hello[j])
    j++;
  }
  if(j==5)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;}
  return 0;
}
