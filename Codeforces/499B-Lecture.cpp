#include "bits/stdc++.h"
using namespace std;
int main()
{
  int m, n;
  cin>>n>>m;
  string s1, s2;
  map<string, string> lec;
  for(int i=0; i<m; ++i)
  {
    cin>>s1>>s2;
    if(s1.size()==s2.size())
    lec[s1]=s1;
    else if(s1.size()<s2.size())
    lec[s1]=s1;
    else
    lec[s1]=s2;
  }
  for(int i=0; i<n; ++i)
  {
    cin>>s1;
    cout<<lec[s1]<<" ";
  }
  cout<<endl;
  return 0;
}
