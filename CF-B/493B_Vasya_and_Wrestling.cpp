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
LL n,l,r,j,k,m,y,x,v,a[100505],b[1000],rez,h,i,cnt,last;
vector <LL> f1,f2;
int main()
{
  init();
  cin >> n;
    LL sum1 = 0, sum2 = 0;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        if (x < 0)
        {
           f2.push_back(-x);
           sum2 += -x;
        }
        else
        {
            f1.push_back(x);
            sum1 += x;
        }
        if (x < 0) last = 2; else last = 1;
    }
    cnt = 0;
    for (i = 0; i < min(f1.size(),f2.size()); i++)
    {
        if (f1[i] > f2[i])
        {
         cnt = 1;
         break;
        }
        else
        if (f2[i] > f1[i])
        {
         cnt = 2;
         break;
        }
    }
    if (sum1 > sum2) cout << "first" << endl; else
    if (sum1 < sum2) cout << "second" << endl; else
    if (cnt == 1) cout << "first" << endl; else
    if (cnt == 2) cout << "second" << endl; else
    if (last == 1) cout << "first" << endl; else
    cout << "second" << endl;
  //system("PAUSE");
  return 0;
}
