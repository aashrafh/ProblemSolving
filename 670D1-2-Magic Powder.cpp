#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
long long n,k;
vector<long long> OneGnum;
vector<long long> HaveGnum;
bool check(long long x)
{
  long long temp = k;
  for(long long i=0; i<n; ++i)
  {
    if(OneGnum[i]*x > HaveGnum[i])
    temp-=(OneGnum[i]*x-HaveGnum[i]);
	if(temp<0)
  return false;
  }
  return true;
}
int main()
{
  cin>>n>>k;
  long long x;
  for(long long i=0; i<n; ++i)
  {
    cin>>x;
    OneGnum.push_back(x);
  }
  for(long long i=0; i<n; ++i)
  {
    cin>>x;
    HaveGnum.push_back(x);
  }
  long long min(1), max(2e9+1),ans=0;
  while(min<=max){
	  long long mid = (min+max)/2;
	  if(check(mid))
	  {
		  ans=mid;
		  min=mid+1;
	  }
	  else
		  max=mid-1;
  }
  cout<<ans<<endl;
  return 0;
}
