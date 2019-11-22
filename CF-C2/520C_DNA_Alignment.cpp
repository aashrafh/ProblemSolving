#include <bits/stdc++.h>
#define endn "\n"
#define ll long long
using namespace std;
int a, g, c, t;
int main()
{
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  int n; cin>>n;
  string s; cin>>s;
  for(int i=0; i<s.size(); ++i){
    if(s[i] == 'A') a++;
    if(s[i] == 'G') g++;
    if(s[i] == 'C') c++;
    if(s[i] == 'T') t++;
  }
  int mx = max(max(a, c), max(g, t));
  int cnt  = 0;
  if(a == mx) cnt++;
  if(c == mx) cnt++;
  if(t == mx) cnt++;
  if(g == mx) cnt++;
  ll ans = 1;
  for(int i=0; i<s.size(); ++i) ans = ans*cnt%1000000007;
  cout<<ans%1000000007<<endn;
  return 0;
}
