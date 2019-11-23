#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  int n, m;
  int hr1, hr2;
  double min1, min2, sumhr,summin, temp1, temp2;
  char colon1, colon2;
  for(int i=0; i<T; ++i)
  {
    cin>>n>>m;
    summin=0, sumhr=0;
    for(int i=0; i<n; ++i)
    {
      cin>>hr1>>colon1>>min1;
      cin>>hr2>>colon2>>min2;
      summin+=(abs(min1-min2));
      while(summin>59)
      {
        sumhr++;
        summin-=60;
      }
      sumhr+=(abs(hr1-hr2));
    }
    if(sumhr>=m)
    cout<<"YES\n";
    else
    cout<<"NO\n";
  }
  return 0;
  return 0;
}
