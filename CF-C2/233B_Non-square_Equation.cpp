#include <bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
void init() { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }
ll sum(ll x) {
  ll s, t = x;
  for(s = 0; x > 0; s += x%10, x /= 10);
  return s;
}
int main()
{
  init();
  ll n, x; cin>>n;
  ll lim = sqrt(n);
  for(int i=0; i<=90; ++i) {
    ll rt = (i*i)+(4*n);
    ll root = sqrt(rt);
    if(root*root == rt) {
      ll x = (-i+root)/2;
      if(x >= 0 && sum(x) == i) {
        cout<<x<<Endl;
        return 0;
      }
      x = (-i-root)/2;
      if(x >= 0 && sum(x) == i) {
        cout<<x<<Endl;
        return 0;
      }
    }
  }
  cout<<-1<<Endl;
  return 0;
}
