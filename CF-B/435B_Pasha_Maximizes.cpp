#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#include<bits/stdc++.h>
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
char a[25];
int k;
pair<int, int> t1[25], t2[25];
int main()
{
  init();
  cin>>a>>k;
  int n = strlen(a);
  for(int i=0; i<n; ++i)
  {
    t1[i].F = a[i];
    t1[i].S = i;
    t2[i].F = a[i];
    t2[i].S = i;
  }
  stable_sort(t1, t1+n);
  int j = n-1;
  for(int i=0; i<k; ++i)
  {
    int idx = t1[j].S;
    int tmp = a[idx];
    a[idx] = a[i];
    a[i] = tmp;
  }
  cout<<a<<Endl;
  //system("PAUSE");
  return 0;
}
