#include <bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  int n; cin>>n;
  string s; cin>>s;
  for(int i=0; i<n; ++i) {
    cin>>a[i];
  }
  int x = 0, t = 0;
  while(!seen[x]){
    seen[x] = true;
    if(s[x] == '<') x -= a[x];
    else x += a[x];
    if(x < 0 || x >= s.size()) {
      cout<<"FINITE\n";
      return 0;
    }
  }
  cout<<"INFINITE\n";
  return 0;
}
