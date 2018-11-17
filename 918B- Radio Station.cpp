#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<string,string> ip;
  int n,m;
  cin>>n>>m;
  string x,y;
  for(int i=0; i<n; i++)
  {
    cin>>x>>y;
    y+=";";
    ip[y]=x;
  }
  for(int i=0; i<m; ++i)
  {
    cin>>x>>y;
    cout<<x<<" "<<y<<" #"<<ip[y]<<endl;
  }
return 0;
}
