#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll n, k;
  cin>>n>>k;

  ll odds, even;
  if(n%2 == 0)
  {
    odds = even = n/2;
  }
  else
  {
    even = n/2;
    odds = n - even;
  }

  const int d = 2;
  ll an, a1, N;
  if(k>odds)
  {
    N = k-odds;
    a1 = 2;
  }
  else
  {
    N = k;
    a1 = 1;
  }

  an = a1 + (N-1)*d;
  cout<<an<<endl;
  return 0;
}
