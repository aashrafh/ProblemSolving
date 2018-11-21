#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, t, k, d;
  cin>>n>>t>>k>>d;
  if(n<k)
  {
    cout<<"NO\n";
    return 0;
  }
  int Before_Oven, After_Oven;
  Before_Oven = 0;
  After_Oven = 0;
  int x = n;
  while(x>0)
  {
    x-=k;
    Before_Oven+=t;
  }
  while(n>0)
  {
    n-=k;
    After_Oven+=t;
    if(After_Oven>d)
    n-=k;
  }
  if(Before_Oven<=After_Oven)
  cout<<"NO\n";
  else
  cout<<"YES\n";
  return 0;

}
