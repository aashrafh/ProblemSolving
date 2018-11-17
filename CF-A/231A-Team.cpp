#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int a, b, c;
  cin>>n;
  int sum, count=0;
  for(int i=0; i<n; ++i)
  {
    cin>>a>>b>>c;
    sum = a+b+c;
    if(sum>=2)
    count++;
  }
  cout<<count<<endl;
  return 0;
}
