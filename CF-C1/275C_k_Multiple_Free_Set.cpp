#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#include<deque>
#include <bitset>
#include <cstdio>
#define Endl "\n"
#define LL long long
#define F first
#define S second
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int n, k, a[100005];
int main()
{
  init();
  cin>>n>>k;
  for(int i=0; i<n; ++i) cin>>a[i];
  sort(a, a+n);
  set<int> s;
  for(int i=0; i<n; ++i)
  {
    if(a[i]%k == 0 && s.find(a[i]/k)!=s.end()) continue;
    s.insert(a[i]);
  }
  cout<<s.size()<<Endl;
  //system("PAUSE");
  return 0;
}
