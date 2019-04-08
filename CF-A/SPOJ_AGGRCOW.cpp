#include<bits/stdc++.h>
using namespace std;
int t, n, c;
int a[100000+7];
bool valid (int DST)
{
  int cur = a[0], count = 1;
  for(int i=1; i<n; ++i)
  {
    if(a[i]-cur >= DST)
    {
       count++;
       cur = a[i];
    }
  }
  if(count >= c)
  return true;
  return false;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin>>t;
  while(t--)
  {
    cin>>n>>c;
    for(int i=0; i<n; ++i) cin>>a[i];
    sort(a, a+n);

    int end = a[n-1]+5, start = 0;
    while(start<=end)
    {
      int mid = start+(end-start)/2;
      if(valid(mid)) start = mid+1;
      else end = mid-1;
    }
    if (valid(end)) cout<<end<<endl;
		else cout<<start<<endl;
  }
  return 0;
}
