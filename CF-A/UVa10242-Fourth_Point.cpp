#include<iostream>
#include<algorithm>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

int main()
{
  long long l, r;
  cin>>l>>r;
  if(r-l-1 == 0){ cout<<-1<<endl; return 0;}

  int ans = 0;
  for(long long i=l+1; i<r; ++i)
  {
    if(gcd(i-1, i) == 1 && gcd(i, i+1) == 1 && gcd(i-1, i+1) != 1 && (i+1)<=r)
    {
      cout<<(i-1)<<" "<<i<<" "<<(i+1)<<endl;
      return 0;
    }
  }

  cout<<-1<<endl;
  return 0;
}
