#include<bits/stdc++.h>
using namespace std;
int _max(int a[], int n)
{
  int ans = -1;
  for(int i=0; i<(2*n+1); ++i)
  if(a[i] > ans) ans = a[i];
  return ans;
}
int main()
{
  int n, k;
  cin>>n>>k;
  int arr[2*n+5];
  for(int i=0; i<(2*n+1); ++i)
  {
    cin>>arr[i];
  }
  for(int i=0; i<(2*n+1); ++i)
  {
    if(i%2==1 && k && arr[i] > arr[i-1]+1 && arr[i] > arr[i+1]+1)
    {
      cout<<arr[i]-1<<" ";
      k--;
    }
    else
    {
      cout<<arr[i]<<" ";
    }
  }
  cout<<"\n";
  return 0;
}
