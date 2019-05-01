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
  vector<int> r1(n);
  for(int i=0; i<n; ++i) cin>>r1[i];
  int m;
  cin>>m;
  vector<int> p1(m);
  for(int i=0; i<m; ++i) cin>>p1[i];
  int k; cin>>k;
  vector<int> p2(k);
  for(int i=0; i<k; ++i) cin>>p2[i];
  int a, b; cin>>a>>b;

  sort(r1.begin(), r1.end());
  sort(p1.begin(), p1.end());
  sort(p2.begin(), p2.end());

  double r2 = sqrt((1.0*b*p1[p1.size()-1]*r1[r1.size()-1]*r1[r1.size()-1])/(1.0*a*p2[0] + 1.0*b*p1[p1.size()-1]));
  printf("%.12f", r2);ش
  return 0;
}
