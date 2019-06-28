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
int main()
{
  init();
  int a, b, c, d;
  cin>>a>>b>>c>>d;
  if(a*d == c*b) cout<<"0/1\n";
  else if(a*d > c*b) printf ("%d/%d\n", (a*d - c*b) / __gcd((a*d - c*b), (a*d)), (a*d) / __gcd((a*d - c*b), (a*d)));
  else printf ("%d/%d\n", (-a*d + c*b) / __gcd((-a*d + c*b), (c*b)), (c*b) / __gcd((-a*d + c*b), (c*b)));
  //system("PAUSE");
  return 0;
}
