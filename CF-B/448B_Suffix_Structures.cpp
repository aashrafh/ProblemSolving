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
//DSU
/*
int deg[10005];
int par[10005];
int find(int x)
{
  if(par[x] == x) return x;
  else return par[x] = find(par[x]);
}
void make_union(int x, int  y)
{
  x = find(x);
  y = find(y);
  par[y] = x;
}*/
int t1[26], t2[26];
int main()
{
  init();
  string s, t;
  cin>>s>>t;
  for(int i=0; i<s.size(); ++i) t1[s[i]-'a']++;
  for(int i=0; i<t.size(); ++i) t2[t[i]-'a']++;
  for(int i=0; i<26; ++i)
  {
    if(t1[i] < t2[i])
    {
      cout<<"need tree"<<endl;
      return 0;
    }
  }
  if(s.size() == t.size())
  {
    cout<<"array"<<endl;
    return 0;
  }
  int j=0;
  for(int i=0;i<s.size();i++)
        if(s[i]==t[j])
            j++;
    if(j==t.size())
        cout<<"automaton"<<endl;
    else
        cout<<"both"<<endl;
    return 0;
}
