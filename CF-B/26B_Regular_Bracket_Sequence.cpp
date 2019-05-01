#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#include<stack>
#define Endl "\n"
#define LL long long
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
  string s;
  cin>>s;
  stack<char> st;
  int ans = 0;
  for(int i=0; i<s.size(); ++i)
  {
    if(s[i] == '(') st.push(s[i]);
    else
    {
      if(!st.empty() && st.top() == '(')
      {
        ans+=2;
        st.pop();
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}
