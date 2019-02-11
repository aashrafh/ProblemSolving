#include<iostream>
using namespace std;
int main()
{
  int n, m;
  bool flag = false;
  cin>>n>>m;
  for(int i=0; i<n; ++i)
  {
    for(int j=0; j<m; ++j)
    {
      char ch;
      cin>>ch;
      if(ch == 'C' || ch=='M' || ch == 'Y') flag = true;
    }
  }

  (flag) ? cout<<"#Color\n" : cout<<"#Black&White\n";
}
