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
#include <bitset>
#include <cstdio>
#include<bits/stdc++.h>
#define Endl "\n"
#define LL long long
#define F first
#define S second
#define inf 0x3f3f3f3f3f3f3f3fll
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
//int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
//int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int a[110],ei,ej;
struct node{
	int x,y,step;
};
int n;
bool vis[110][100010];
int dd[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
int bfs(int si,int sj)
{
	node t,tt;
	queue<node> qu;
	t.x=si,t.y=sj;t.step=0;
	memset(vis,false,sizeof(vis));
	vis[si][sj]=true;
	qu.push(t);
	while(!qu.empty()){
		t=qu.front();qu.pop();
		if(t.x==ei&&t.y==ej) return t.step;
		tt.step=t.step+1;
		for(int i=0;i<4;i++){
			tt.x=t.x+dd[i][0];
			tt.y=t.y+dd[i][1];
			if(tt.x<1||tt.x>n) continue;
			if(dd[i][1]&&(tt.y<1||tt.y>a[tt.x]))
				continue;
			tt.y=min(tt.y,a[tt.x]);
			if(vis[tt.x][tt.y]) continue;
			vis[tt.x][tt.y]=true;
			qu.push(tt);

		}
	}
	return -1;
}
int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int si,sj;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		a[i]++;
	}
	scanf("%d%d%d%d",&si,&sj,&ei,&ej);
	int ans=bfs(si,sj);
	printf("%d\n",ans);

}
