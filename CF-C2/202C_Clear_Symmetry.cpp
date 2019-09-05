#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  int x;
  cin>>x;
  if(x == 3){
    cout<<5<<Endl;
    return 0;
  }
  for(int i=1; i<=100; i+=2){
    if(x <= (i*i+1)/2){
      cout<<i<<Endl;
      return 0;
    }
  }
  return 0;
}
