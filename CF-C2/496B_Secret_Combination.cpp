#include <bits/stdc++.h>
#define endn "\n"
#define ll long long
using namespace std;
string play(string s) {
  int diff = 10 - (s[0]-'0');
  s[0] = '0';
  for(int i = 1; i<s.size(); ++i) {
    int t = ((s[i]-'0')+diff)%10;
    s[i] = '0'+t;
  }
  return s;
}
int main()
{
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  int n; cin>>n;
  string s; cin>>s;
  string ans = play(s);
  for(int i=0; i<n; ++i){
    string t = play(s.substr(i)+s.substr(0, i));
    ans = min(ans, t);
  }
  cout<<ans<<endn;
  return 0;
}
