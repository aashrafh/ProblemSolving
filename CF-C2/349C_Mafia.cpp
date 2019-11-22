#include <bits/stdc++.h>
#define endn "\n"
using namespace std;
int main()
{
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);

  int n; cin>>n;
  long long mx = 0, x, s = 0;
  for(int i=0; i<n; ++i) {
    cin>>x;
    mx = max(mx, x);
    s += x;
  }
  cout<<max(mx, (s-1)/(n-1)+1)<<endn;
  return 0;
}
