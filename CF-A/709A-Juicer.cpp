#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int arr[100005];
int main()
{
  int n, b, d;
  cin>>n>>b>>d;
  int x;
  for(int i=0; i<n; ++i)
  {
    cin>>x;
    if(x<=b)
    arr[i]=x;
  }
  int cnt=0;
  for(int i=1; i<100005; ++i)
  {
    arr[i]+=arr[i-1];
    while(arr[i]>d)
    {
      cnt++;
      arr[i]=0;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
