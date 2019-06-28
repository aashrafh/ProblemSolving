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
const int maxn=120;
int m,n,A[maxn][maxn],B[maxn][maxn],anss=1;
int B0[maxn][maxn];
char ans[2][5]={"NO","YES"};
int main()
{
  init();
  int i,j,k;
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			A[i][j]=1,scanf("%d",&B[i][j]);
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			if(!B[i][j])
			{
				for(k=1;k<=n;k++)
					A[i][k]=0;
				for(k=1;k<=m;k++)
					A[k][j]=0;
			}
	for(i=1;i<=m&&anss;i++)
		for(j=1;j<=n&&anss;j++)
		{
			B0[i][j]=0;
			for(k=1;k<=n;k++)
				B0[i][j]|=A[i][k];
			for(k=1;k<=m;k++)
				B0[i][j]|=A[k][j];
			if(B0[i][j]!=B[i][j]) anss=0;
		}
	printf("%s\n",ans[anss]);
	if(anss)
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
				printf("%d%c",A[i][j],j<n?' ':'\n');
  //system("PAUSE");
  return 0;
}
