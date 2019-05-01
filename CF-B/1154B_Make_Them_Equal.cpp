#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#define Endl "\n"
#define LL long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}

int main()
{
  init();
  int n;
  cin>>n;
  set<int> a;
  for(int i=0; i<n; ++i)
  {
    int x;
    cin>>x;
    a.insert(x);
  }
  if(a.size() == 1) cout<<0<<Endl;
  else if(a.size() == 2)
  {
    int x = *(a.begin());
    int y = *(++a.begin());
    if((x+y)%2) cout<<y-x<<Endl;
    else cout<<(y-x)/2<<Endl;
  }
  else if(a.size() == 3)
  {
    int x = *(a.begin());
    int y = *(++a.begin());
    int z = *(++((++a.begin())));
    if(y-x == z-y) cout<<y-x<<Endl;
    else cout<<-1<<Endl;
  }
  else cout<<-1<<Endl;
  return 0;
}
