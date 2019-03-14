#include<bits/stdc++.h>
using namespace std;
int main()
{
  int r1, r2, c1, c2, d1, d2;
  cin>>r1>>r2>>c1>>c2>>d1>>d2;
  for(int i=1; i<=9; ++i)for(int r=1; r<=9; ++r)for(int c=1; c<=9; ++c)for(int d=1; d<=9; ++d){
    if(i!=r&&i!=c&&i!=d&&r!=c&&r!=d&&c!=d)
    {
      if(i+r==r1&&d+c==r2&&i+c==c1&&r+d==c2&&i+d==d1&&r+c==d2)
      {
        cout<<i<<" "<<r<<endl;
        cout<<c<<" "<<d<<endl;
        return 0;
      }
    }
  }
  cout<<-1<<endl;
}
