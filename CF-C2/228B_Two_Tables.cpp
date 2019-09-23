#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int na, ma, nb, mb, a[60][60], b[60][60], x, y, sum;
bool valid(int i, int j, int k, int l) {
  return k+i>=1 && k+i<=nb && l+j>=1 && l+j<=mb;
}
int summation(int i, int j) {
  int s = 0;
  for(int k=1; k<=na; ++k) {
    for(int l = 1; l<=ma; ++l) {
      if(valid(i, j, k, l)) {
        s += a[k][l]*b[k+i][l+j];
      }
    }
  }
  return s;
}
int main()
{
  init();
  cin>>na>>ma;
  for(int i=1; i<=na; ++i) {
    for(int j=1; j<=ma; ++j) {
      char ch; cin>>ch;
      a[i][j] = (ch=='1');
    }
  }
  cin>>nb>>mb;
  for(int i=1; i<=nb; ++i) {
    for(int j=1; j<=mb; ++j) {
      char ch; cin>>ch;
      b[i][j] = (ch=='1');
    }
  }
  for(int i=-51; i<=51; ++i) {
    for(int j=-51; j<=51; ++j) {
      int s = summation(i, j);
      if(s > sum) {
        x = i;
        y = j;
        sum = s;
      }
    }
  }
  cout<<x<<" "<<y<<Endl;
  return 0;
}
