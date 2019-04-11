#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#define endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
unsigned long long int B, P, M;
unsigned long long int power(unsigned long long int b, unsigned long long int p, unsigned long long int m)
{
  b = b%m;
  unsigned long long int ans = 1;
  while(p)
  {
	  if(p&1)
		  ans = (ans*b)%m;
	  b = (b*b)%m;
	  p = p>>1;
  }
  return ans;
}
int main()
{
  init();
  while(cin>>B&&cin>>P&&cin>>M)
  {
    unsigned long long int pw = power(B, P, M), ans = pw%M;
    cout<<ans<<endl;
  }
  //system("PAUSE");
  return 0;
}
