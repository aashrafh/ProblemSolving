#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s1, s2, s3, s4;
  cin>>s1>>s2>>s3;
  s4=s1+s2;
  if(s3.length()!=s4.length())
  cout<<"NO"<<endl;
  else
  {
    sort(s3.begin(), s3.end());
    sort(s4.begin(), s4.end());
    if(s3!=s4)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
  }
  return 0;
}
