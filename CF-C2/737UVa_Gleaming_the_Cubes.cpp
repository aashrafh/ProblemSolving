#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  int n;
  while(cin>>n){
    if(n == 0) break;
    int x, y, z, d; cin>>x>>y>>z>>d;
    int lx = x, ly = y, lz = z;
    int rx = x+d, ry = y+d, rz = z+d;
    n--;
    while(n--){
      cin>>x>>y>>z>>d;
      lx = max(lx, x);
      ly = max(ly, y);
      lz = max(lz, z);
      rx = min(rx, x+d);
      ry = min(ry, y+d);
      rz = min(rz, z+d);
    }
    ll ans = max(0, (rx-lx)*(ry-ly)*(rz-lz));
    cout<<ans<<Endl;
    cin>>n;
  }
  return 0;
}
