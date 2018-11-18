#include<bits/stdc++.h>
using namespace std;
int main()
{
  set<long long int> clr;
  long long int x;
  for(int i=0; i<4; ++i)
  {
     cin>>x;
     clr.insert(x);
  }
  int ans = 4 - clr.size();
  cout<<ans<<endl;
  return 0;
}
