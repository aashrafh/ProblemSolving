#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#include"bits/stdc++.h"
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
  int n, t1, t2;
  double k;
  cin>>n>>t1>>t2>>k;
  k = k / 100.0;
  vector< pair<double, int> > v;
  for(int i=1; i<=n; ++i)
  {
    int a, b;
    cin>>a>>b;
    double ans1 = (1.0*a*t1)-(1.0*a*t1*k)+(1.0*b*t2);
    double ans2 = (1.0*b*t1)-(1.0*b*t1*k)+(1.0*a*t2);
    v.push_back(make_pair(-1*max(ans1, ans2), i));
  }
  sort(v.begin(), v.end());
  for(int i=0; i<v.size(); ++i)
  {
    cout<<v[i].second<<" "<<fixed<<setprecision(2)<<-1*v[i].first<<endl;
  }
  return 0;
}
