#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  cin>>n;
  long long int x; long long int t[21];
  memset(t,0,sizeof(t));
  for(long long int i=0; i<n; ++i)
  {
    cin>>x;
    t[x+10]++;
  }
  long long int count=0;
  for(long long int i=0; i<10; ++i)
  {
    count+=t[i]*t[20-i];
  }
  count+=(t[10]*(t[10]-1))/2;
  cout<<count<<endl;
  return 0;
}
