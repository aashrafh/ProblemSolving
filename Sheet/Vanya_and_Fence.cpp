#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,h;
  cin>>n>>h;
  int arr[2005];
  int sum=0;
  for(int i=0; i<n; ++i)
  {
    cin>>arr[i];
    if(arr[i]<=h)
    sum++;
    else if(arr[i]>h)
    sum+=2;
  }
  cout<<sum<<endl;
  return 0;
}
