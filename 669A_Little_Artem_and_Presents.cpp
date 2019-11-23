#include <bits/stdc++.h>
#define endn "\n"
using namespace std;
int main()
{
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);

  int n; cin>>n;
  int ans = (n/3)*2 + (n%3==0 ? 0 : 1);
  cout<<ans<<endn;
  return 0;
}
