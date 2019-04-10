#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  int n;
  cin>>n;
  int x, ans = 0;
  for(int i=0; i<n; ++i)
  {
    cin>>x;
    if(x>ans) ans = x;
  }
  cout<<ans<<endl;
  return 0;
}
