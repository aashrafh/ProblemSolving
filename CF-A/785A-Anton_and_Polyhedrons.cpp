#include<iostream>
#include<map>
#include<string>
using namespace std;
map<string, int> mp;
int main()
{
  mp["Icosahedron"] = 20;
  mp["Cube"] = 6;
  mp["Tetrahedron"] = 4;
  mp["Octahedron"] = 8;
  mp["Dodecahedron"] = 12;
  int n;
  cin>>n;

  long long sum = 0;
  for(int i=0; i<n; ++i)
  {
    string s;
    cin>>s;
    sum+=mp[s];
  }

  cout<<sum<<endl;
}
