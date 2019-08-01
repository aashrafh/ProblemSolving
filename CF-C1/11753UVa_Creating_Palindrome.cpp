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
#include<bits/stdc++.h>
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
int memo[1005][1005], t, k, a[10005], n;

/*int best(int i, int j)
{
  if(i >= j) return 0;

  int &ret = memo[i][j];
  if(ret != -1) return ret;

  ret = best(i+1, j-1) + (a[i] != a[j]);
  ret = min(ret, best(i+1, j)+1);
  ret = min(ret, best(i, j-1)+1);

  return ret;
}*/

int best(int i, int j, int sum)
{
  if(sum > k) return 9999999;
  if(i >= j) return sum;

  if(a[i] == a[j]) return best(i+1, j-1, sum);
  else return min(best(i, j-1, sum+1), best(i+1, j, sum+1));
}

int main()
{
  init();
  cin>>t;
  int cs = 1;
  while(t--)
  {
    cin>>n>>k;
    for(int i=0; i<n; ++i) cin>>a[i];
    memset(memo, -1, sizeof memo);
    int ans = best(0, n-1, 0);
    if(ans == 0)
    {
      cout<<"Case "<<cs++<<": Too easy\n";
    }
    else if(ans > k)
    {
      cout<<"Case "<<cs++<<": Too difficult\n";
    }
    else cout<<"Case "<<cs++<<": "<<ans<<Endl;
  }
  //system("PAUSE");
  return 0;
}
