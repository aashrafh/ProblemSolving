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
  int n, m;
  cin>>n>>m;
  set<int> ans;
  for(int i=0; i<n; ++i)
  {
      string s; cin>>s;
      int G = s.find('G'), S = s.find('S');
      ans.insert(S-G);
  }
  if(*ans.begin() < 0) return cout<<-1, 0;
  cout<<ans.size()<<Endl;
  return 0;
}
