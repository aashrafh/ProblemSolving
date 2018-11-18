#include<bits/stdc++.h>
using namespace std;
int main()
{
  char s[55];
  int n, cnt=0;
  cin>>n;
  cin>>s;
  if(n==1)
  {
    cout<<'0'<<endl;
    return 0;
  }
  for(int i=1; i<n; ++i)
  {
    if(s[i]==s[i-1])
    cnt++;
  }
  cout<<cnt<<endl;
  return 0;
}
