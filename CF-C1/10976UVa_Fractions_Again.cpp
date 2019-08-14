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
vector<int> ans;

int main()
{
  init();
  int k;
  while (scanf("%d",&k) != EOF)
  {
    ans.clear();
    int n = k*k;
    for(int i=1; i*i<=n; ++i)
    {
      if(n%i ==0)
      {
        ans.push_back(n/i);
        ans.push_back(i);
      }
    }
    int cnt = ans.size()/2;
    printf("%d\n", cnt);
    for(int i=0; i<ans.size(); i+=2)
    {
      printf("1/%d = 1/%d + 1/%d\n", k, ans[i] + k, ans[i + 1] + k);
    }
  }
  //system("PAUSE");
  return 0;
}
