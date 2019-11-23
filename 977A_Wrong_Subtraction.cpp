#include <bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
void init() { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); }
int main()
{
  init();
  int n, k; cin>>n>>k;
  for(int i=0; i<k; ++i) {
    if(n%10 == 0) n /= 10;
    else n--;
  }
  cout<<n<<Endl;
  return 0;
}
