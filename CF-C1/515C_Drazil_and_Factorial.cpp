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
int main()
{
  init();
  int n;
  cin>>n;
  string s, ans;
  cin>>s;
  for(int i=0; i<s.size(); ++i){
    if(s[i] == '0' || s[i] == '1') continue;
    else if(s[i] == '2') ans.push_back('2');
    else if(s[i] == '3') ans.push_back('3');
    else if(s[i] == '4') ans.append("223");
    else if(s[i] == '5') ans.push_back('5');
    else if(s[i] == '6') ans.append("35");
    else if(s[i] == '7') ans.push_back('7');
    else if(s[i] == '8') ans.append("2227");
    else ans.append("2337");
  }
  sort(ans.begin(), ans.end());
  reverse(ans.begin(), ans.end());
  cout<<ans<<Endl;
  //system("PAUSE");
  return 0;
}
