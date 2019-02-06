#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[105];
  int sm=0;
  for(int i=0; i<n; ++i) {
	  cin>>a[i];
	  sm+=a[i];
  }

  sort(a, a+n);

  float mid = sm/2.0;
  int sum = 0, x = n-1, coins=0;
  while(sum <= mid && x >= 0)
  {
    sum+=a[x];
    x--;
    coins++;
  }

  cout<<coins<<"\n";
}
