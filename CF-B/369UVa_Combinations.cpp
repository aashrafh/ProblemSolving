#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#define endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}

int C[105][105] = {0};
void dp()
{
  for(int i=0; i<105; ++i)
  {
    for(int j=0; j<105; ++j)
    {
      C[i][j] = (j==0) ? 1 : ((i==0) ? 0 : C[i-1][j-1] + C[i-1][j]);
    }
  }
}
int main()
{
  init();
  dp();
  int a, b;
  cin>>a>>b;
  while(a!=0 && b!=0)
  {
    //100 things taken 6 at a time is 1192052400 exactly.
    cout<<a<<" things taken "<<b<<" at a time is "<<C[a][b]<<" exactly.\n";
    cin>>a>>b;
  }
  return 0;
}
