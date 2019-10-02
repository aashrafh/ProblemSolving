#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}

int main()
{
  int a, b;
  cin>>a>>b;
	for (int x=1; x<a; x++){
		int y=sqrt(a*a-x*x);
		if (y*y==a*a-x*x && (y*b)%a==0 && (x*b)%a==0 && (x*b)/a!=y){
			return cout<<"YES\n0 0\n"<<x<<" "<<y<<" "<<endl<<-(y*b)/a<<" "<<(x*b)/a,0;
		}
	}
	cout<<"NO";
}
