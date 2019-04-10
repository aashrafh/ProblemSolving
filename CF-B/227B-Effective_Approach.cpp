#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#define endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
const int MAX = 1e5+5;
int pos[MAX];
int main()
{
  init();
  int n, m, b;
  int vas = 0, pat = 0;
  cin>>n;
  vector<int> a(n), pos(n);
  for(int i=0; i<n; ++i) { int tmp; cin>>tmp; pos[tmp] = i;}
  //sort(a.begin(), a.end());
  cin>>m;
  for(int i=0; i<m; ++i)
  {
    cin>>b;
    vas += pos[b]+1;
    pat += n-pos[b];
  }
  cout<<vas<<" "<<pat<<endl;
  return 0;
}
