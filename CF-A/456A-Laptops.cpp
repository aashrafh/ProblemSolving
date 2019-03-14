#include<bits/stdc++.h>
using namespace std;
int n;
pair<int, int> a[100000+5];
int main()
{
  cin>>n;
  for(int i=0; i<n; ++i)
  {
    cin>>a[i].first>>a[i].second;
  }
  sort(a, a+n);
  for(int i=1; i<n; ++i)
  {
    if(a[i].second < a[i].first)
    {
      cout<<"Happy Alex\n";
      return 0;
    }
  }
  cout<<"Poor Alex\n";
  return 0;
}
