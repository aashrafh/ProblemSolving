#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  int n;
  cin>>n;

  //int X[n], Y[n], Z[n];
  int sumX=0, sumY=0, sumZ=0;
  for(int i=0; i<n; ++i)
  {
    int x, y, z;
    cin>>x>>y>>z;
    sumX+=x;
    sumY+=y;
    sumZ+=z;
  }

  if(sumX == 0 && sumZ == 0 && sumY == 0) cout<<"YES\n";
  else cout<<"NO\n";
}
