#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#define Endl "\n"
#define LL long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}

vector<int> what = {0, 1, 2, 0, 2, 1, 0};
int a, b, c;
int Rem(int day)
{
  int t[3];
  t[0] = a;
  t[1] = b;
  t[2] = c;
  int res = 0;
  while(true)
  {
    if (t[what[day]] == 0) break;
    res++;
    t[what[day]]--;
    day = (day + 1) % 7;
  }
  return res;
}
int main()
{
  init();
  cin>>a>>b>>c;
  int res = 0;
  while(a > 3 && b > 3 && c > 3)
  {
    a-=3;
    b-=2;
    c-=2;
    res+=7;
  }
  int rem = 0;
  for(int i=0; i<7; ++i) rem = max(rem, Rem(i));
  cout<<res+rem<<Endl;
  return 0;
}
