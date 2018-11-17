#include<bits/stdc++.h>
using namespace std;
char a[1000005];
char b[1000005];
int main()
{

  int n, ans=0;
  cin>>n;
  cin>>a>>b;
  for(int i=1; i<n; ++i)
  {
   if(a[i-1]!=b[i-1]&&a[i]!=b[i]&&a[i]!=a[i-1])
   {
     swap(a[i],a[i-1]);
     ans++;
   }
  }
  for(int i=0; i<n; i++)
  {
    if(a[i]!=b[i])
    {
    ans++;
  }
  }
  cout<<ans<<endl;
  return 0;
}
