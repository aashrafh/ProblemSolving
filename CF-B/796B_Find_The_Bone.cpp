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
int hole[1000005];
int main()
{
  init();
  int n, m, k;
  cin>>n>>m>>k;
  for(int i=0; i<m; ++i)
  {
    int x;
    cin>>x;
    hole[--x] = 1;
  }
  int pos = 0;
  for(int i=0; i<k; ++i)
  {
    int x, y;
    cin>>x>>y;
    x--; y--;
    if(x == pos && !hole[x]) pos = y;
    else if(y == pos && !hole[y]) pos = x;
  }
  cout<<pos+1<<Endl;
  return 0;
}
