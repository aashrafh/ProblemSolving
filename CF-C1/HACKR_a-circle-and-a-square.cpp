#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#include<deque>
#include <bitset>
#include <cstdio>
#include <stdio.h>
#include <string.h>
#define Endl "\n"
#define LL long long
#define F first
#define S second
#define inf 0x3f3f3f3f3f3f3f3fll
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
vector<double> generate_square(double x1, double y1, double x3, double y3)
{
  vector<double> square;
  double x2 = (x1+x3+y3-y1)/2;
  double y2 = (y1+y3+x1-x3)/2;
  double x4 = (x1+x3+y1-y3)/2;
  double y4 = (y1+y3+x3-x1)/2;
  square.push_back(x1);
  square.push_back(y1);
  square.push_back(x2);
  square.push_back(y2);
  square.push_back(x3);
  square.push_back(y3);
  square.push_back(x4);
  square.push_back(y4);
  return square;
}
double calc_dst(double x1, double y1, double x2, double y2)
{
  return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
bool in_circle(double xc, double yc, double r, double x, double y)
{
  return r>=0.0 && r>=calc_dst(xc, yc, x, y);
}
vector<double> generate_vector(double x1, double y1, double x2, double y2)
{
  vector<double> v(2);
  v[0] = x2 - x1;
  v[1] = y2 - y1;
  return v;
}
double dot_product(vector<double> a, vector<double> b)
{
  return (a[0]*b[0])+(a[1]*b[1]);
}
bool in_square(vector<double> s, double x, double y, double area)
{
  double d = calc_dst(s[0], s[1], s[4], s[5]);
  if(d == 0.0)
  {
    if(s[0] == x && s[1] == y) return true;
    else return false;
  }

  vector<double> ab = generate_vector(s[0], s[1], s[2], s[3]);
  vector<double> am = generate_vector(s[0], s[1], x, y);
  vector<double> bc = generate_vector(s[2], s[3], s[4], s[5]);
  vector<double> bm = generate_vector(s[2], s[3], x, y);

  double abab = dot_product(ab, ab);
  double abam = dot_product(ab, am);
  double bcbc = dot_product(bc, bc);
  double bcbm = dot_product(bc, bm);

  return abam >= 0 && abam <= abab && bcbm >= 0 && bcbm <= bcbc;
}
int main()
{
  init();
  double w, h, xc, yc, r, x1, y1, x3, y3;
  cin>>w>>h>>xc>>yc>>r>>x1>>y1>>x3>>y3;
  vector<double> square = generate_square(x1, y1, x3, y3);
  double d = calc_dst(x1, y1, x3, y3);
  double area = d*d/2;

  for(int i=0; i<h; ++i)
  {
    for(int j=0; j<w; ++j)
    {
      if(in_circle(xc, yc, r, j, i) || in_square(square, j, i, area)) cout<<'#';
      else cout<<'.';
    }
    cout<<Endl;
  }
  //system("PAUSE");
  return 0;
}
