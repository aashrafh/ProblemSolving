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
int main()
{
  init();
  string s;
  cin>>s;
  int n = s.size();
  int ans = 0;
  int last = -1;
  for(int i=0; i<n; ++i)
  {
      if(i+3 < n && s.substr(i, 4) == "bear")
      {
          ans+=(n-(i+3))*(i-last);
          last = i;
      }
  }
  cout<<ans<<Endl;
  return 0;
}
