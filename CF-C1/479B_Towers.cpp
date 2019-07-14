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
int a[200];
int op[1010][2];
int n, k;
int main()
{
  init();
  cin>>n>>k;
  for(int i=1; i<=n; ++i) cin>>a[i];
  int i, j, mn, mx, mnid, mxid;
  mn = 100000000, mx=-1;
  for(i=1; i<=k; ++i)
  {
    mx=-1;
        mn=100000000;
        for(j=1;j<=n;j++)
        {
            if(a[j]>mx)
            {
                mx=a[j];
                mxid=j;
            }
            if(a[j]<mn)
            {
                mn=a[j];
                mnid=j;
            }
        }
        //printf("*%d %d\n",mxid,mnid);
        if(a[mxid]-a[mnid]>1)
        {
            op[i][0]=mxid;
            op[i][1]=mnid;
            a[mxid]--;
            a[mnid]++;
        }
        else break;
  }
  mx=-1;
       mn=100000000;
       for(j=1;j<=n;j++)
       {
           if(a[j]>mx)
           {
               mx=a[j];
               mxid=j;
           }
           if(a[j]<mn)
           {
               mn=a[j];
               mnid=j;
           }
       }
   printf("%d %d\n",a[mxid]-a[mnid],i-1);
   for(j=1;j<i;j++) printf("%d %d\n",op[j][0],op[j][1]);
  //system("PAUSE");
  return 0;
}
