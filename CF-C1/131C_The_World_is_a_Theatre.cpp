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
LL C[150][150];
int main()
{
  init();
  int n, m, t;
  cin>>n>>m>>t;
  int j = 0 ;
  for(int i=0;i<40;i++)
    {
        C[i][0]=C[i][i]=1;
        for(j=1;j<i;j++)
        C[i][j]=C[i-1][j-1]+C[i-1][j];
    }
    LL ret=0;
        for(int i=1;i+4<=t;i++)
        {
            ret+=C[m][i]*C[n][t-i];
        }
        cout<<ret<<endl;
  //system("PAUSE");
  return 0;
}
