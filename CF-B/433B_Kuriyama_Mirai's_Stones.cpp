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
  vector<LL> a(n+5), b(n+1);
  a[0] = 0, b[0] = 0;
  for(int i=1; i<=n; ++i)
  {
    LL x;
    cin>>x;
    a[i] = x+a[i-1];
    b[i] = x;
  }
  sort(b.begin(), b.end());
  for(int i=1; i<=n; ++i) b[i] += b[i-1];
  cin>>m;
  for(int i=0; i<m; ++i)
  {
    int t, x, y;
    cin>>t>>x>>y;
    if(t==1)
    {
      cout<<a[y]-a[x-1]<<endl;
    }
    else
    {
      cout<<b[y]-b[x-1]<<endl;
    }
  }
  return 0;
}
