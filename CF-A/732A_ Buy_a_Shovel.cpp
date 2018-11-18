#include<iostream>
using namespace std;
int main()
{
  int k, r, ans=1;
  cin>>k>>r;
  while(true)
  {
    if((k*ans)%10==r||(k*ans)%10==0)
    {
      cout<<ans<<endl;
      return 0;
    }
    ans++;
  }
}
