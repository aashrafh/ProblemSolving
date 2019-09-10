#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int n, a, b, c, d;
bool valid(int x){
  return x>=1 && x<=n;
}
int main()
{
  init();
  cin>>n>>a>>b>>c>>d;
  ll ans = 0;
  for(int i=1; i<=n; ++i){
    int y = i+b-c;
    int z = i+a-d;
    int w = b+z-c;
    if(valid(y)&&valid(z)&&valid(w)) ans++;
  }
  cout<<ans*n<<Endl;
  return 0;
}
