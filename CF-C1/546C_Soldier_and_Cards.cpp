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
int main()
{
  init();
  int n; cin>>n;
  deque<int> a, b;
  int k1; cin>>k1;
  while(k1--) { int x; cin>>x; a.push_back(x); }
  int k2; cin>>k2;
  while(k2--) { int x; cin>>x; b.push_back(x); }

  for(int i=0; i<40000000; ++i)
  {
    if(a.empty())
    {
      cout<<i<<" "<<2<<Endl;
      return 0;
    }
    if(b.empty())
    {
      cout<<i<<" "<<1<<Endl;
      return 0;
    }
    int x = a.front(); a.pop_front();
    int y = b.front(); b.pop_front();
    if(x > y)
    {
      a.push_back(y);
			a.push_back(x);
    }
    if (x < y) {
			b.push_back(x);
			b.push_back(y);
		}
  }
  cout<<-1<<Endl;
  //system("PAUSE");
  return 0;
}
