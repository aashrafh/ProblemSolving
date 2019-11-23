#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin>>n;
  map<string, int> usr;
  string user;
  for(size_t i=0; i<n; ++i)
  {
    cin>>user;
    if(usr.count(user)==0)
    {
        usr[user]=1;
        cout<<"OK\n";
    }
    else
    {
      cout<<user<<usr[user]<<endl;
      usr[user]++;
    }
  }
  return 0;
}
