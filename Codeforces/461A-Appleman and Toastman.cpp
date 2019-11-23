#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  cin>>n;
  long long int x;
  if(n==1)
  {
    cin>>x;
    cout<<x<<endl;
    return 0;
  }
  long long int sum=0;
  vector<long long int>arr;
  for(long long int i=0; i<n; ++i)
  {
    cin>>x;
    arr.push_back(x);
    sum+=x;
  }
  sort(arr.begin(),arr.end());
  long long int score = sum;
  for(long long int i=0; i<n-1; i++)
  {
    score+=sum;
    sum-=arr[i];
  }
  cout<<score<<endl;
  return 0;
}
