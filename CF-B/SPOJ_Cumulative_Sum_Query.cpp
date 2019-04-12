#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#define endl "\n"
#define LL long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  LL n, m;
  cin>>n;
  vector<LL> a(n+5);
  for(int i=0; i<n; ++i)
  {
    cin>>a[i];
    if(i!=0) a[i]+=a[i-1];
  }
  cin>>m;
  for(int i=0; i<m; ++i)
  {
    int x, y;
    cin>>x>>y;
    if(x!=0) cout<<a[y]-a[x-1]<<endl;
    else cout<<a[y]<<endl;
  }
  return 0;
}
