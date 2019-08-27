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
#include <stdio.h>
#include <string.h>
#define Endl "\n"
#define ll long long
#define F first
#define S second
#define inf 0x3f3f3f3f3f3f3f3fll
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[]={-1,-1,0,1,1,1,0,-1};
int dy[]={0,1,1,1,0,-1,-1,-1};
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int a, b;
int bs(int low, int high)
{
  int ans = -1;
  while(low<=high)
  {
    int mid = (low+high)/2;
    if(a%mid==0 && b%mid==0)
    {
      ans = mid;
      low = mid+1;
    }
    else if(a<mid || b<mid) high = mid-1;
    else low = mid+1;
  }
  return ans;
}

vector<int> divs;
void g(int gcd)
{
  for(int i=1; i*i<=gcd; ++i)
  {
    if(gcd%i==0)
    {
      divs.push_back(i);
      if(gcd/i > i) divs.push_back(gcd/i);
    }
  }
}
int main()
{
  init();
  cin>>a>>b;
  int gcd = __gcd(a, b);
  g(gcd);
  sort(divs.begin(), divs.end());
  int n; cin>>n;
  for(int i=0; i<n; ++i)
  {
    int x, y;
    cin>>x>>y;
    int ans = -1;
    for(int i=divs.size()-1; i>=0; --i)
    {
      if(divs[i]>=x && divs[i]<=y) {
        ans = divs[i];
        break;
      }
    }
    cout<<ans<<Endl;
  }
  //system("PAUSE");
  return 0;
}
