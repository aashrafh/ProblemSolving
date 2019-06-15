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
int seen[1000006];
long long d(long long n)
{
    if(seen[n]) return seen[n];
    int cnt = 0;
    for(int i=1; i*i<=n; ++i)
    {
        if(n%i == 0)
        {
            cnt++;
            if(i*i != n) cnt++;
        }
    }
    seen[n] = cnt;
    return cnt;
}
int main()
{
  init();
  int a, b, c;
  long long ans = 0;
  cin>>a>>b>>c;
  for(int i=1; i<=a; ++i)
   for(int j=1; j<=b; ++j)
    for(int k=1; k<=c; ++k)
     ans+=d(i*j*k);

     cout<<ans%1073741824<<Endl;
  return 0;
}
