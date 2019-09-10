#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int n, a[100005];
int l[1000005], r[1000005];
map<int, int> t;
int main()
{
  init();
  cin>>n;
  for(int i=1; i<=n; ++i){
    cin>>a[i];
    if(t.count(a[i]) == 0){
      t[a[i]] = 1;
      l[a[i]] = i;
      r[a[i]] = i;
    }
    else{
      t[a[i]]++;
      r[a[i]] = i;
    }
  }
  int mx = 0, x;
  for(auto e : t){
    if(e.second > mx){
      mx = e.second;
      x = e.first;
    }
  }
  int mn = 1e9;
  for(auto e : t){
    if(e.second == mx){
      if(r[e.first]-l[e.first]+1 < mn){
        mn = r[e.first]-l[e.first]+1;
        x = e.first;
      }
    }
  }
  cout<<l[x]<<" "<<r[x]<<Endl;
  return 0;
}
