#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
string s;
int a, b, aa[1000005];
int main()
{
  init();
  cin>>s;
  cin>>a>>b;
  aa[0] = (s[0]-'0')%a;
  for(int i=1; i<s.size(); ++i) {
    aa[i] = (aa[i-1]*10+s[i]-'0')%a;
  }
  int bb = 0, p = 1;
  for(int i=s.size()-1; i; --i) {
    bb = (bb + p*(s[i]-'0'))%b;
    if(s[i] > '0') {
      if(!bb && !aa[i-1]) {
        cout<<"YES\n";
        cout << s.substr(0, i) << endl;
        cout << s.substr(i, s.size() - i) << endl;
        return 0;
      }
    }
    p = p*10%b;
  }
  cout<<"NO\n";
  return 0;
}
