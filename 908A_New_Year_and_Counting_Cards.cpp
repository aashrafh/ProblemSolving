#include <bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
void init() { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }
int main()
{
  init();
  string s; cin>>s;
  int ans = 0;
  for(int i=0; i<s.size(); ++i) {
    if(isdigit(s[i])) {
      if((s[i]-'0') % 2 == 1) ans++;
    }
    else if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') ans++;
  }
  cout<<ans<<Endl;
  return 0;
}
