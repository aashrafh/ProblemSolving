#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#define endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int a[100];
int main()
{
  init();
  //cout<<__gcd(39,13)<<endl;
  int n;
  cin>>n;
  while(n)
  {
    int ans = 0;
    for(int i=0; i<n; ++i) cin>>a[i];
    for(int i=0; i<n; ++i)
    {
      for(int j=i+1; j<n; ++j)
      {
        if(__gcd(a[i], a[j]) == 1) ans++;
      }
    }
    if(!ans) cout<<"No estimate for this data set.\n";
    else printf("%0.6f\n",sqrt(6.000000*(n*(n-1)/2)/ans));
    cin>>n;
  }
  return 0;
}
