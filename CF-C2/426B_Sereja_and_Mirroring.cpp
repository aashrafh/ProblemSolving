#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int a[105][105];
int main()
{
  init();
  int n, m; cin>>n>>m;
  if(n%2){
    cout<<n<<Endl;
    return 0;
  }
  for(int i=0; i<n; ++i){
    for(int j=0; j<m; ++j) cin>>a[i][j];
  }
  bool v = false;
  while(n%2==0){
    for(int i=0; i<n/2&&!v; ++i){
      for(int j=0; j<m; ++j) if(a[i][j] != a[n-i-1][j]){
        v = true;
        break;
      }
    }
    if(v) break;
    else n /= 2;
  }
  cout<<n<<Endl;
  return 0;
}
