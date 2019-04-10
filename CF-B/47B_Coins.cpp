#include<iostream>
#include<set>
#include<algorithm>
#include<string>
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int pos[3];
int main()
{
  init();
  string s;
  for(int i=0; i<3; ++i)
  {
    cin>>s;
    if(s[1] == '>') pos[s[0]-'A']++;
    else pos[s[2]-'A']++;
  }
  if(pos[0] == pos[1] || pos[1] == pos[2] || pos[0] == pos[2])
  {
    cout<<"Impossible\n";
    return 0;
  }
  for(int i=0; i<3; ++i)
  {
    for(int j=0; j<3; ++j)
    {
      if(pos[j] == i) cout<<(char)(j+'A');
    }
  }
  return 0;
}
