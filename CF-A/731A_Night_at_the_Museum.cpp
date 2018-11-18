#include<bits/stdc++.h>
using namespace std;
map<char,int> mp;
void fill(){
  mp['a']=1;
  mp['b']=2;
  mp['c']=3;
  mp['d']=4;
  mp['e']=5;
  mp['f']=6;
  mp['g']=7;
  mp['h']=8;
  mp['i']=9;
  mp['j']=10;
  mp['k']=11;
  mp['l']=12;
  mp['m']=13;
  mp['n']=14;
  mp['o']=15;
  mp['p']=16;
  mp['q']=17;
  mp['r']=18;
  mp['s']=19;
  mp['t']=20;
  mp['u']=21;
  mp['v']=22;
  mp['w']=23;
  mp['x']=24;
  mp['y']=25;
  mp['z']=26;
}
int main()
{
  fill();
  string s;
  char ch='a';
  int sum=0, x, y, z;
  cin>>s;
  for(int i=0; i<s.size(); ++i)
  {
    y=abs(mp[s[i]]-mp[ch]);
    z=abs(26-y);
    x = min(y,z);
    sum+=x;
    ch=s[i];
  }
  cout<<sum<<endl;
  return 0;
}
