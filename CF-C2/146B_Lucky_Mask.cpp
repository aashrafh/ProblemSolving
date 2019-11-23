#include <bits/stdc++.h>
#define endn "\n"
#define ll long long
using namespace std;
int mask(int x){
  string s = to_string(x);
  string res = "";
  for(int i=0; i<s.size(); ++i){
    if(s[i]=='4' || s[i] == '7') res += s[i];
  }
  int ans = 0;
  for(int i=0; i<res.size(); ++i){
    ans = ans*10+(res[i]-'0');
  }
  return ans;
}
int main()
{
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  int a, b; cin>>a>>b;
  int i;
  for(i=a+1;;i++){
    if(mask(i) == b)break;
  }
  cout<<i<<endn;
  return 0;
}
