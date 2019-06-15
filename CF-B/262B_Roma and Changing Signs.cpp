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
int n, k;
int a[100005];
int main()
{
  init();
  cin>>n>>k;
  for(int i=0; i<n; ++i) cin>>a[i];
  sort(a, a+n);
  for(int i=0; i<0; ++i)
  {
  	if(a[i] < 0 && k > 0)
  	{
  		a[i]*=-1;
  		k--;
  	}
  }
  if(k)
  {
  	for(int i=0; i<k; ++i) a[0]*=-1;
  }
  int sum = 0;
  for(int i=0; i<n; ++i) sum+=a[i];
  	cout<<sum<<Endl;
  return 0;
}
