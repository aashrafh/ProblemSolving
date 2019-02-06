#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> a(n);

  for(int i=0; i<n; ++i) cin>>a[i];
  sort(a.begin(), a.end());

  int ans=0;
  int max = a[n-1];
  int min = a[0];
  for(int i=1; i<n-1; ++i)
  {
	  if(a[i]>min && a[i]<max) ans++;
  }

  cout<<ans<<endl;
}
