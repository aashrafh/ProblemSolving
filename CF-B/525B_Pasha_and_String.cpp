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
#define F first
#define S second
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int a[200005];
int main()
{
  init();
  string s;
  cin>>s;
  int m;
  cin>>m;
  for(int i=0; i<m; ++i){
    int x;
    cin>>x;
    int st = x;
    int end = s.size()-x+1;
    a[st]++;
    a[end]--;
  }
  for(int i=1; i<=s.size()/2; ++i)
  {
    a[i] += a[i-1];
    if(a[i]%2) swap(s[i-1],s[(s.size()-i+1)-1]);
  }
  cout<<s<<Endl;
  //system("PAUSE");
  return 0;
}
