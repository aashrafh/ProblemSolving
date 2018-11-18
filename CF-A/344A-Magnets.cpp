#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
  int n, groups=1;
  cin>>n;
  for(int i=0; i<n; ++i)
  {
    cin>>arr[i];
  }
  for(int i=1; i<n; ++i)
  {
    if(arr[i]!=arr[i-1])
    groups++;
  }
  cout<<groups<<endl;
  return 0;
}
