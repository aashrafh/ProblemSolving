#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll n, sum=0, x, y, k;
  cin>>n>>k;
  for(int i=0; i<n; ++i)
  {
    cin>>x>>y;
    sum+=(y-x+1);
  }
  if(sum%k==0)
  {
    cout<<0<<endl;
    return 0;
  }
  ll ans=0;
  while(sum%k!=0)
  {
    sum++;
    ans++;
  }
  cout<<ans<<endl;
  return 0;
}
