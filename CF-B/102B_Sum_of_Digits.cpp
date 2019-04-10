#include<iostream>
#include<set>
#include<algorithm>
#include<string>
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  string s;
  cin>>s;
  int sum = 10, ans = 0;
  if(s.size()==1) cout<<"0\n";
  else
  {
    while(sum>=10)
    {
      sum = 0;
      for(int i=0; i<s.size(); ++i) sum+=s[i]-'0';
      s = to_string(sum);
      ans++;
    }
    cout<<ans<<endl;
  }
  return 0;
}
