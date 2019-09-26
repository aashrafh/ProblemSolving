#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}

int main()
{
  init();
  int n; cin>>n;
  set<set<int>> a;
  bool valid = false;
  for(int i=0; i<n; ++i) {
    set<int> s;
    for(int j=1; j<=6; j++) {
    int x; cin>>x; s.insert(x);
    }
    if(a.count(s) == 0) {
      a.insert(s);
    }
    else {
      if(!valid) {
        cout<<"Twin snowflakes found.\n";
        valid = true;
      }
    }
  }
  if(!valid) cout<<"No two snowflakes are alike.\n";
  return 0;
}
