#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  vector<char> song;
  for(int i=0; i<s.size(); i++)
  song.push_back(s[i]);
  bool flag=true;
  for(int i=0; i<song.size(); ++i)
  {
    if(song[i]=='W'&&song[i+1]=='U'&&song[i+2]=='B'){
      i+=2;
      if(!flag)
      cout<<" ";
      continue;
    }
    else{
      flag=false;
      cout<<song[i];
    }
  }
  cout<<endl;
  return 0;
}
