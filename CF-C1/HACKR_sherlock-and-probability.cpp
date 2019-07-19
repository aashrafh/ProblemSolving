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
int main()
{
  init();
  int t, n, k;
  cin>>t;
  string s;
  int acc[100001];
  while(t--)
  {
    cin>>n>>k;
    cin>>s;
    acc[0] = 0;
    for(int i=0; i<n; ++i) acc[i+1] = acc[i]+s[i]-'0';

    LL a=0, b=(LL)n*n;
    for(int i=0; i<n; ++i)
    {
      if(s[i] == '1')
      {
        int r = min(i+k, n-1);
        a += 2*(acc[r+1]-acc[i])-1;  
      }
    }

    LL g = __gcd(a, b);
    a /= g;
    b /= g;
    cout<<a<<"/"<<b<<Endl;
  }
  //system("PAUSE");
  return 0;
}
