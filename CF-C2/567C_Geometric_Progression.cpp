#include <bits/stdc++.h>
#define endn "\n"
#define ll long long
using namespace std;
ll a[200005];
map<ll, ll> r, l;
int main()
{
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  int n, k; cin>>n>>k;
  for(int i=0; i<n; ++i) {
    cin>>a[i];
    r[a[i]]++;
  }
  ll ans = 0;
  for(int i=0; i<n; ++i) {
    ll ar = 0, al = 0;
    if(a[i] % k == 0){
      al = l[a[i]/k];
    }
    r[a[i]]--;
    l[a[i]]++;
    ar = r[a[i]*k];
    ans += (ar*al);
  }
  cout<<ans<<endn;
  return 0;
}
