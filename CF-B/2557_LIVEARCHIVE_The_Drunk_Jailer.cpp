#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#define endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    cout<<(int)sqrt(n)<<endl;
  }
  return 0;
}
