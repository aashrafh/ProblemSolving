#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#define Endl "\n"
#define LL long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
string aa, b;
int a[200005];
int main()
{
  init();
  cin>>aa>>b;
  for(int i=1; i<=b.size(); ++i) a[i] = a[i-1] + b[i-1] - '0';
  int s = b.size() - aa.size() + 1;
  int ans = 0;
  for(int i=0; i<aa.size(); ++i)
  {
    if(aa[i] == '0') ans += (a[i+s] - a[i]);
    else ans += (s - (a[i+s] - a[i]));
  }

  cout<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
