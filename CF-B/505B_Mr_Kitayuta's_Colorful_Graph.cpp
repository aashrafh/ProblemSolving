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
vector< vector<int> > vec(110);
int main()
{
  init();
  int n, m;
  cin>>n>>m;
  for(int i=0; i<m; ++i)
  {
    int a, b, c;
    cin>>a>>b>>c;
    vec[a].push_back(c);
    vec[b].push_back(c);
  }
  int q;
  cin>>q;
  for(int i = 0; i<q; ++i)
  {
    int a, b;
    cin>>a>>b;
    vector<int> ans(205);
    vector<int>::iterator it;
    it = set_intersection(vec[a].begin(), vec[a].end(), vec[b].begin(), vec[b].end(), ans.begin());
    ans.resize(it-ans.begin());
    cout<<ans.size()<<Endl;
  }
  return 0;
}
