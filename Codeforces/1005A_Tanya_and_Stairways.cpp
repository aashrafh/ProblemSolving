#include <bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
void init() { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }
int a[1500], ans[1500];
int main()
{
  init();
  int n; cin>>n;
  for(int i=0; i<n; ++i) {
    cin>>a[i];
  }
  int c = 0;
  for(int i=0; i<n; ++i) {
    if(a[i] == 1) ans[c++] = 1;
    else ans[c-1]++;
  }
  cout<<c<<Endl;
  for(int i=0; i<c; ++i) cout<<ans[i]<<" ";
  cout<<Endl;
  return 0;
}
