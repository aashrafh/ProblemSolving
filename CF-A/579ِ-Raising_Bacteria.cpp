#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n, ans=0; cin>>n;

  while(n > 0)
  {
    if(n%2 == 0)
    {
      n /= 2;
    }
    else
    {
      ans++;
      n--;
    }
  }
  cout<<ans<<endl;
  return 0;
}
