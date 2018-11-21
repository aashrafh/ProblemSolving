#include<iostream>
#include<set>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
  set<char> ltr;
  string s;
  getline(cin, s);
  if(s.size()==2)
  cout<<0<<endl;
  else
  {
  for(int i=0; i<s.size(); ++i)
  {
    if(s[i]!='}'&&s[i]!='{'&&s[i]!=','&&s[i]!=' ')
    ltr.insert(s[i]);
  }
  cout<<ltr.size()<<endl;
  }
  return 0;
}
