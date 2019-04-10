#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#define endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
bool SortBySec(const pair<int, int> &aa, const pair<int, int> &b)
{
  return (aa.second > b.asecond);
}
int main()
{
  init();
  int n, m;
  cin>>n>>m;
  vector<pair<int, int> > a(m+5);
  map<int ,int> ValperBox;
  for(int i=0; i<m; ++i)
  {
    cin>>a[i].first>>a[i].second;
    ValperBox[a[i].second] = 1.0 * a[i].second / a[i].first;
  }
  sort(a.begin(), a.end(), SortBySec);
  int ans = 0;
  for(int i=0; i<m; ++i)
  {
    if(a[i].first <= n)
    {
      ans += a[i].first * a[i].second;
      n -= a[i].first;
    }
    else if(a[i].first>n && n>0)
    {
      ans += n * a[i].second;
      n = 0;
    }
  }
  cout<<ans<<endl;
  return 0;
}
