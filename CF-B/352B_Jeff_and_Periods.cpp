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
vector<vector<int> > a(1e5+5);
set<int> t;
int main()
{
  init();
  int n;
  cin>>n;
  for(int i=0; i<n; ++i)
  {
      int x;
      cin>>x;
      a[x].push_back(i);
      t.insert(x);
  }
  vector< pair<int, int> > ans;
  int cnt = 0;
  for(auto x : t)
  {
      if(a[x].size() == 1)
      {
          cnt++;
          ans.push_back(make_pair(x, 0));
      }
      else if(a[x].size() == 2)
      {
          ans.push_back(make_pair(x, a[x][1]-a[x][0]));
          cnt++;
      }
      else
      {
          int diff = a[x][1]-a[x][0];
          bool valid = true;
       for(int i=a[x].size()-1; i>=2; --i)
       {
           if(a[x][i] - a[x][i-1] != diff) valid = false;
       }
       if(valid)
       {
           cnt++;
           ans.push_back(make_pair(x, diff));
       }
      }
  }

  cout<<ans.size()<<Endl;
  for(int i=0; i<ans.size(); ++i)
  {
      cout <<ans[i].first<<" "<<ans[i].second<<Endl;
  }
  return 0;
}
