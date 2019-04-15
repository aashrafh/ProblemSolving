#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#define Endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  string s;
  cin>>s;
  string s1 = s;
  reverse(s1.begin(), s1.end());
  s+=s1;
  cout<<s<<Endl;
  return 0;
}
