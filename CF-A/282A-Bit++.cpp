#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int x = 0;
  for(int i=0; i<n; ++i)
  {
    char ch1, ch2, ch3;
    cin>>ch1>>ch2>>ch3;
    if(ch3=='x' || ch3=='X')
    {
      if(ch1==ch2 && ch1 == '+') x++;
      else if (ch1==ch2 && ch1 == '-') x--;
    }
    else if(ch1 == 'x' || ch1=='X')
    {
      if(ch3==ch2 && ch3 == '+') x++;
      else if (ch3==ch2 && ch3 == '-') x--;
    }
    else continue;
  }

  cout<<x<<"\n";
}
