#include<iostream>
using namespace std;
int arr[105];
int main()
{
  int n;
  cin>>n;
  int h[35], g[35];
  for(int i=0; i<n; ++i)
  {
    cin>>h[i]>>g[i];
  }
  int ans=0;
  for(int i=0; i<n; ++i)
  {
    for(int j=0; j<n; ++j)
    {
      if(h[i]==g[j])
      ans++;
    }
  }
  cout<<ans<<endl;
  return 0;
}
