#include <bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
void init() { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }
map<char, int> mp;
int n, k;
int main()
{
  init();
  cin>>n>>k;
  char t;
  for(int i=0; i<n; ++i){
    cin>>t;
    mp[t]++;
  }
  vector<pair<char, int>> v;
  for(auto p : mp) v.push_back(p);
  sort(v.begin(), v.end(), [](const pair<char, int> &l, const pair<char, int> &r){return l.second > r.second;});
  ll ans = 0;
  int i = 0;
  while(k && i<v.size()) {
    if(v[i].second <= k) {
      ans += ((ll)v[i].second*(ll)v[i].second);
       k-= v[i].second;
    }
    else {
      ans += ((ll)k*(ll)k);
      k = 0;
    }
    i++;
  }
  cout<<ans<<Endl;
  return 0;
}
