#include<iostream>
using namespace std;
int n;
int a[100+5], x, ans;
int main()
{
  cin>>n;

  for(int i=0; i<n; ++i)
  {
    cin>>x;
    a[x]++;
    ans = max(a[x], ans);
  }
  cout<< (ans > (n+1)/2 ? "NO\n":"YES\n");
  return 0;
}
