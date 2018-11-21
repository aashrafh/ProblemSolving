#include<bits/stdc++.h>
using namespace std;
char alpha[28] = {"abcdefghijklmnopqrstuvwxyz"};
int main()
{
  int n, k;
  cin>>n>>k;
  char ans[n];
  for(int i=0; i<k; ++i)
  {
    ans[i]=alpha[i];
  }
  int i=0;
  while(n)
  {
    cout<<ans[i++];
    if(i==k) i=0;
    n--;
  }
  return 0;
}
