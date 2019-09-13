#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
bool prime[2000005];
int pr[2000005], pa[2000005];
void generate_primes() {
  for(int i=2; i*i<=2000005; ++i) {
    if(prime[i]) {
      for(int j=i*i; j<=2000005; j+=i) prime[j] = false;
    }
  }
}
bool isPal(int k) {
  string s1 = to_string(k);
  string s2 = s1;
  reverse(s2.begin(), s2.end());
  return s1==s2;
}
int main()
{
  init();
  memset(prime, true, sizeof prime);
  prime[0] = prime[1] = false;
  int p, q; cin>>p>>q;
  generate_primes();
  int ans = 0;
  for(int i=1; i<=2000005; ++i) {
    pr[i] = pr[i-1], pa[i] = pa[i-1];
    pr[i] += prime[i];
    pa[i] += isPal(i);
    if(q*pr[i] <= pa[i]*p) ans = max(ans, i);
  }
  cout<<ans<<Endl;
  return 0;
}
