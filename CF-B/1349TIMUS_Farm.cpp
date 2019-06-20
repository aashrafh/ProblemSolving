#include<iostream>

int main()
{
  int n;
  cin>>n;
  if(n==1) std::cout<<"1 2 3\n";
  else if(n == 2) std::cout<<"3 4 5\n";
  else std::cout<<-1<<endl;
  return 0;
}
