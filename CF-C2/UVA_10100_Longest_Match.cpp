#include <bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
void init() { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }
string a, b;
int dp[1000][1000];
vector<string> c, d;
int lcs(int i, int j) {
  if(i >= c.size() || j >= d.size()) return 0;
  if(dp[i][j] != -1) return dp[i][j];
  int ans = 0;
  if(c[i] == d[i]) ans = max(ans, lcs(i+1, j+1) + 1);
  ans = max(ans, lcs(i, j+1));
  ans = max(ans, lcs(i+1, j));
  return dp[i][j] = ans;
}
int main()
{
  init();
  int cs = 1;
  while(getline (cin , a)) {
    c.clear(); d.clear();
    getline (cin , b);
    for(int i=0; i<a.size(); ++i) if(!islower(a[i]) && !isupper(b[i]) && !isdigit(a[i])) a[i] = ' ';
    for(int i=0; i<b.size(); ++i) if(!islower(b[i]) && !isupper(b[i]) && !isdigit(b[i])) b[i] = ' ';
    string s1, s2;
    istringstream x(a), y(b);
    while(x >> s1) c.push_back(s1);
    while(y >> s2) d.push_back(s2);
    if(c.size() == 0 || d.size() == 0) {
      cout<<cs++<<".  "<<"Blank!\n";
      continue;
    }
    memset(dp, -1, sizeof dp);
    int ans = lcs(0, 0);
    cout<<cs++<<".  "<<"Length of longest match: "<<ans<<Endl;
    a.clear();
    b.clear();
    s1.clear();
    s2.clear();
    x.clear();
    y.clear();
  }
  return 0;
}
