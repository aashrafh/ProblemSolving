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
int debtor[105], creditor[105];
int main()
{
  init();
  int n, m;
  cin>>n>>m;
  for(int i=0; i<m; ++i)
  {
      int a, b, c;
      cin>>a>>b>>c;
      creditor[a] += c;
      debtor[b] += c;
  }
  int ans = 0;
  for(int i=1; i<=n; ++i)
  {
     if(debtor[i] > creditor[i]) ans+=(debtor[i] - creditor[i]);
  }
  cout<<ans<<Endl;
  return 0;
}
