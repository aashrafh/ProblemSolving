#include <bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  long long M[1001];

    M[0]=2;M[1]=5;M[2]=13;

    for(int i=3;i<1001;i++)
        M[i]=2*M[i-1]+M[i-2]+M[i-3];

    int n;

    while(cin>>n) cout<<M[n]<<endl;
  return 0;
}
