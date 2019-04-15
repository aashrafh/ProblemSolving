#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#define Endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  int n, k;
  cin>>n>>k;
  vector<int> a(n+5);
  a[0] = 0;
  for(int i=1; i<=n; ++i)
  {
    cin>>a[i];
    a[i] += a[i-1];
  }
  int mini = 15000005, ind = -1;
  for(int i=k; i<=n; ++i)
  {
    if(a[i]-a[i-k] < mini)
    {
      mini = a[i]-a[i-k];
      ind = i;
    }
  }
  cout<<ind-k+1<<Endl;
  return 0;
}
