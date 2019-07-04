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
int n;
map < pair<int,int> , int> M;
map < int , int> frx;
map < int , int> fry;
int main()
{
  init();
  int i,j,x,y;
  long long sol=0;
  cin>>n;
    for(i=1;i<=n;++i)
    {
        cin>>x>>y;
        sol+=frx[x]+fry[y]-M[make_pair(x,y)];
        ++frx[x]; ++fry[y]; ++M[make_pair(x,y)];
    }
    cout<<sol;
  //system("PAUSE");
  return 0;
}
