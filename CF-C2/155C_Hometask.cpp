#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  string s; cin>>s;
  int k; cin>>k;
  int ans = 0;
  for(int i=0; i<k; ++i) {
    char a, b; cin>>a>>b;
    int ca = 0, cb = 0;
    for(int j=0; j<s.size(); ++j) {
      if(s[j] == a || s[j] == b){
        if(s[j] == a) ca++;
        else cb++;
      }
      else {
        ans += min(ca, cb);
        ca = 0, cb = 0;
      }
    }
    ans += min(ca, cb);
  }
  cout<<ans<<Endl;
  return 0;
}
