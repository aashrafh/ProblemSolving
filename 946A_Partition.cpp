#include <bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
void init() { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }
int a[2000];
int main()
{
  init();
  int n; cin>>n;
  for(int i=0; i<n; ++i) {
    cin>>a[i];
  }
  sort(a, a+n);
  int mn = 0;
  for(int i=1; i<n; ++i) {
    mn += (a[i] - a[i-1] -1);
  }
  cout<<mn<<Endl;
  return 0;
}
