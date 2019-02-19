#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a, int b)
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
    cout<<__gcd(933700505788726244, 933700505788726245)<<" "<<__gcd(933700505788726245, 933700505788726246)<<" "<<__gcd(i-1, i+1)<<endl;
    if(__gcd(i-1, i) == 1 && __gcd(i, i+1) == 1 && __gcd(i-1, i+1) != 1 && (i+1)<=l)
    {
      cout<<(i-1)<<" "<<i<<" "<<(i+1)<<endl;
      return 0;
    }
  }

  cout<<-1<<endl;
  return 0;
}
