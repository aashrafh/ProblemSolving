#include<bits/stdc++.h>
using namespace std;
int main()
{
  set<char> dia, non_dia;
  char ch;
  int n;
  cin>>n;
  for(int i=0; i<n; ++i)
  {
    for(int j=0; j<n; ++j)
    {
      cin>>ch;
      if(i==j || i+j == n-1) dia.insert(ch);
      else non_dia.insert(ch);
    }
  }

  if(dia.size() == 1 && non_dia.size() == 1 && *dia.begin() != *non_dia.begin()) cout<<"YES\n";
  else cout<<"NO\n";
}
