#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int n, dp[1005][1005];
string s;
bool isPal(string s1) {
  string s2 = s1;
  reverse(s2.begin(), s2.end());
  return s2 == s1;
}

int solve(int i, int j) {
    if (i>j||i==j) return dp[i][j]=0;
    if (dp[i][j]!=INT_MAX) return dp[i][j];
    int& ans=dp[i][j];
    if (s[i]==s[j]) ans=solve(i+1,j-1);
    ans=min(ans,min(solve(i+1,j),solve(i,j-1))+1);
    return dp[i][j];
}
void print(int i,int j)
{
    if (i>j) return;
    if (i==j) {printf("%c",s[i]);return;}
    if (s[i]==s[j])
    {
        printf("%c",s[i]);
        print(i+1,j-1);
        printf("%c",s[i]);
    } else if (dp[i][j]==dp[i+1][j]+1){
        printf("%c",s[i]);
        print(i+1,j);
        printf("%c",s[i]);
    }else {
        printf("%c",s[j]);
        print(i,j-1);
        printf("%c",s[j]);
    }
}
int main()
{
  init();
  while (~scanf("%s",s))
    {
        n = s.size();
        memset(dp,INT_MAX,sizeof(dp));
        solve(0,n-1);
        printf("%d ",dp[0][n-1]);
        print(0,n-1);
        puts("");
    }
  return 0;
}
