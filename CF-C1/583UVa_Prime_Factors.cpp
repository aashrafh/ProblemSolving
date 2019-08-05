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
#define inf 0x3f3f3f3f3f3f3f3fll
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
vector<vector<LL>> v;
vector<LL> factorize(LL n)
{
  vector<LL> vv;
  LL num = n;
  while(n%2==0)
  {
    vv.push_back(2);
    n /= 2;
  }
  for(LL i=3; i*i<n; ++i)
  {
    if(n%i==0)
    {
      vv.push_back(i);
      n /= i;
    }
  }
  if(n > 1) vv.push_back(n);
  v.push_back(vv);
  return vv;
}
void work()
{
  for(LL i=2; i<2147483648; ++i)
  {
    factorize(i);
  }
}
int main()
{
  init();
  //work();
  LL num;
  cin>>num;
  while(num != 0)
  {
    cout<<num<<" = ";
    if(num < 0) {
      cout<<-1<<" x ";
      num *= -1;
    }
    vector<LL> ans = factorize(num);
    for(int i=0; i<ans.size(); ++i)
    {
      if(i == ans.size()-1) cout<<ans[i]<<Endl;
      else cout<<ans[i]<<" x ";
    }
    cin>>num;
  }
  //system("PAUSE");
  return 0;
}
