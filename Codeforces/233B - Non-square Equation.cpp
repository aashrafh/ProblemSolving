#include<iostream>
#include<cmath>
using namespace std;
long long sum(long long num)
{
  long long sum=0;
  while(num)
  {
  sum+=num%10;
  num/=10;
  }
  return sum;
}
int main()
{
  long long n, ans=-1;
  cin>>n;
  for(int i=1; i<=81; ++i)
  {
    long long x = sqrt(i*i/4+n)-i/2;
    long long sx=sum(x);
    if(x*x+sx*x-n==0)
    {
    ans=x;
    break;
    }
  }
  cout<<ans<<endl;
  return 0;
}
