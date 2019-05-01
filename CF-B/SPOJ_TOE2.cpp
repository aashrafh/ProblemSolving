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
#define all(v)				((v).begin()), ((v).end())
#define sz(v)				((int)((v).size()))
#define clr(v, d)			memset(v, d, sizeof(v))
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)	for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)	for(int i=(j);i>=(int)(n);--i)
#define pb					push_back
#define mp					make_pair
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };

bool IsWin(string s)
{
  bool no_more = true;
  for(int i=0; i<s.size(); ++i)
  {
    if(s[i] == '.') {no_more = false; break;}
  }
  if(no_more) return no_more;
  bool col = (s[0] != '.' && s[0] == s[3] && s[3] == s[6]) || (s[1] != '.' && s[1] == s[4] && s[4] == s[7]) || (s[2] != '.' && s[2] == s[5] && s[5] == s[8]);
  bool row = (s[0] != '.' && s[0] == s[1] && s[1] == s[2]) || (s[3] != '.' && s[3] == s[4] && s[4] == s[5]) || (s[6] != '.' && s[6] == s[7] && s[7] == s[8]);
  bool dia = (s[0] != '.' && s[0] == s[4] && s[4] == s[8]) || (s[2] != '.' && s[2] == s[4] && s[4] == s[6]);

  return col || row || dia;
}

int main()
{
  init();
  string board;
  cin>>board;
  while(board != "end")
  {
    string start = ".........";
    queue< pair<string, bool> > q;
    string ans = "invalid";
    pair<int, bool> p;
    q.push(make_pair(start, 1));
    while(q.size())
    {
      string cur_board = q.front().first;
      bool player = q.front().second;
      q.pop();
      if(cur_board == board && IsWin(cur_board))
      {
        ans = "valid";
        break;
      }
      if(IsWin(cur_board)) continue;
      for(int i=0; i<cur_board.size(); ++i)
      {
        if(cur_board[i] == '.')
        {
          cur_board[i] = (player ? 'X' : 'O');
          if(cur_board[i] == board[i]) q.push(make_pair(cur_board, 1^player));
          cur_board[i] = '.';
        }
      }
    }
    cout<<ans<<Endl;
    cin>>board;
  }
  return 0;
}
