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
  int n;
  cin>>n;
  set<int> a;
  for(int i=0; i<n; ++i)
  {
    int x; cin>>x;
    a.insert(x);
  }
  if(a.size() < 3) cout<<"YES\n";
  else if(a.size() > 3) cout<<"NO\n";
  else
  {
    int t1, t2, t3;
    t1 = *(a.begin());
    t2 = *(++(a.begin()));
    t3 = *(++(++(a.begin())));
    if(abs(t2-t1) == abs(t3-t2)) cout<<"YES\n";
    else cout<<"NO\n";
  }
  return 0;
}
