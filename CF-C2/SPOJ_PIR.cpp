#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
#define F first
#define S second
#define inf 0x3f3f3f3f3f3f3f3fll
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[]={-1,-1,0,1,1,1,0,-1};
int dy[]={0,1,1,1,0,-1,-1,-1};
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int main()
{
  init();
  int t;
  cin>>t;
  while(t--)
  {
    int u, v, w, U, V, W;
    cin>>w>>v>>u>>U>>V>>W;
    double X = (w - U + v) * (U + v + w);
		double x = (U - v + w) * (v - w + U);
		double Y = (u - V + w) * (V + w + u);
		double y = (V - w + u) * (w - u + V);
		double Z = (v - W + u) * (W + u + v);
		double z = (W - u + v) * (u - v + W);
    double a = sqrt(x*Y*Z);
    double b = sqrt(y*Z*X);
    double c = sqrt(z*X*Y);
    double d = sqrt(x*y*z);
    double num = sqrt((b+c+d-a)*(a-b+c+d)*(a+b-c+d)*(a+b+c-d));
    double vol = num/(192.0*u*v*w);
    cout<<fixed<<setprecision(4)<<vol<<Endl;
  }
  //system("PAUSE");
  return 0;
}
