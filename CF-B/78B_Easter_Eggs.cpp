#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#define endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  int n;
  cin>>n;
  char a[] = "GBIV";
  cout<<"ROY";
  n-=3;
  for(int i=0; i<n; ++i) cout<<a[i%4];
  return 0;
}
