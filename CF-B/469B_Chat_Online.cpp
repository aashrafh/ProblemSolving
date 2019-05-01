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
  int p, q, l, r;
  cin>>p>>q>>l>>r;
  vector< pair<int, int> > a_p(p);
  vector< pair<int, int> > a_q(q);
  for(int i=0; i<p; ++i) cin>>a_p[i].first>>a_p[i].second;
  for(int i=0; i<p; ++i) cin>>a_q[i].first>>a_q[i].second;

  int ans = 0;
  for(int i = l; i<=r; ++i)
  {
    bool enough = false;
    for(int w = 0; w<p; ++w)
    {
      for(int k = 0; k<q; ++k)
      {
        int t1 = a_q[k].first+i;
        int t2 = a_q[k].second+i;
        if(!(t1 > a_p[w].second || t2 < a_p[w].first))
        {
          ans++;
          enough = true;
          break;
        }
      }
      if(enough) break;
    }
  }
  cout<<ans<<Endl;
  return 0;
}
