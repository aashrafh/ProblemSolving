#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#define endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
void gcd(unsigned int A, unsigned int B, int who)
{
  if(!B || A/B>1 || A==B)
  {
    cout<<(who==0? "Stan wins" : "Ollie wins")<<endl;
    return;
  }
  gcd(B, A%B, !who);
}
int main()
{
  init();
  unsigned int a, b;
  cin>>a>>b;
  while(a!=0 && b!=0)
  {
    if(a<b) swap(a, b);
    gcd(a, b, 0);
    cin>>a>>b;
  }
  return 0;
}
