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
#define MOD 1000000007
LL a, b, c;
long long mod_pow(long long a, long long b){
    long long ret = 1;

    while(b){
        if(b & 1) ret = ret * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }

    return ret;
}
void solve(){
  cin>>a>>b>>c;
  LL a1 = mod_pow(a, c);
  LL a2 = mod_pow(b, c);
  cout<<__gcd(a-b, a1+a2)<<Endl;
}
int main()
{
  init();
  int t;
  cin>>t;
  while(t--) solve();
  //system("PAUSE");
  return 0;
}
