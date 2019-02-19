#include<iostream>
using namespace std;
int main()
{
  int n, m;
  cin>>n>>m;
  int ans;
  for(int i=n+1; i<=50; ++i)
  {
    bool flag = false;
    int num = i;
    for(int j=2; j*j<=i; ++j)
    {
		if(i%j == 0) {flag = true; break;}
    }
    if(!flag){ ans = i; break; }
  }

  if(ans == m) cout<<"YES\n";
  else cout<<"NO\n";
}
