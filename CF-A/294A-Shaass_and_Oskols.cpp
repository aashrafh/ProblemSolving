#include<iostream>
using namespace std;
int birds[105];
int shots[105];
int main()
{
  int n, m;
  cin>>n;
  for(int i=0; i<n; ++i)
  {
    cin>>birds[i+1];
  }
    cin>>m;
  int j, x;
  for(int i=0; i<m; ++i)
  {
    cin>>j>>x;
    if(j-1!=0&&j+1<=n)
    {
      birds[j-1]+=birds[j]-x-1;
      birds[j+1]+=birds[j]-x;
      birds[j]=0;
    }
    else if(j-1!=0&&j+1>n)
    {
      birds[j-1]+=birds[j]-x-1;
      birds[j]=0;
    }
    else if(j-1<=0&&j+1<=n)
    {
      birds[j+1]+=birds[j]-x;
      birds[j]=0;
    }
  }
  for(int i=0; i<n; ++i)
  {
    cout<<birds[i+1]<<endl;;
  }
  return 0;
}
