#include<iostream>
using namespace std;
int main()
{
  int Y, W;
  cin>>Y>>W;
  int Max = max(Y,W);
  int cnt=6-Max+1;
  switch(cnt)
  {
    case 1: cout<<"1/6"<<endl; break;
    case 2: cout<<"1/3"<<endl; break;
    case 3: cout<<"1/2"<<endl; break;
    case 4: cout<<"2/3"<<endl; break;
    case 5: cout<<"5/6"<<endl; break;
    case 6: cout<<"1/1"<<endl; break;
  }
  return 0;
}
