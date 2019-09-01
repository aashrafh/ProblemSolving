#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  int n, k; cin>>n>>k;
  n = 1<<n;
  int a[n];
  for(int i=0; i<n; ++i) cin>>a[i];
  int small = 0, big = 0;
  for(int i=0; i<n; ++i) {
    if(a[i] > a[k]) big++;
    if(a[i] < a[k]) small++;
  }
  int ans = log2(small+1);
  int ansm = big==0 ? ans : 0;
  cout<<ansm<<" "<<ans<<Endl;

  return 0;
}
