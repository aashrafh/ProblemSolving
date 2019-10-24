#include <bits/stdc++.h>
#define Endl "\n"
using namespace std;
int main()
{
  int n, k, a, ans = 0; cin>>n;
  for(int i=1; i<=n; ++i) {
    cin>>k>>a;
    if(a==1) k++;
    else for(int l=1; l<a; l<<=2) k++;
    ans = max(ans, k);
  }
  cout<<ans<<Endl;
  return 0;
}
