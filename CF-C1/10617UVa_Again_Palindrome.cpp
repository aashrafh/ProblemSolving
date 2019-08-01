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
LL memo[100][100], t, k, a[10005], n;
string s;
LL best(int i, int j)
{
  if(i == j) return 1;
  if(i+1 == j) return 2+(s[i] == s[j]);

  LL &ret = memo[i][j];
  if(ret != -1) return ret;

  ret = 0;
  if(s[i] == s[j]) ret += best(i+1, j-1)+1;
  ret += best(i+1, j);
  ret += best(i, j-1);
  ret -= best(i+1, j-1);

  return ret;
}

/*int best(int i, int j, int sum)
{
  if(sum > k) return 9999999;
  if(i >= j) return sum;

  if(a[i] == a[j]) return best(i+1, j-1, sum);
  else return min(best(i, j-1, sum+1), best(i+1, j, sum+1));
}*/

int main()
{
  init();
  cin>>t;
  int cs = 1;
  while(t--)
  {
    cin>>s;
    memset(memo, -1, sizeof memo);
    int ans = best(0, s.size()-1);
    cout<<ans<<Endl;
  }
  //system("PAUSE");
  return 0;
}
