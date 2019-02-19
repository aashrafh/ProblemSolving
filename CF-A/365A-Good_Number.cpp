#include<iostream>
#include<algorithm>
#include<string>
#include <sstream>
#include<map>

using namespace std;

int main()
{
  int n, k;
  cin>>n>>k;
  string s = "0123456789";
  int ans = 0, cnt=0;
  for(int i=0; i<n; ++i)
  {
    string ss;
    cin>>ss;
    for(int i=0; i<=k; ++i)
    {
      if(ss.find(s[i]) != string::npos) cnt++;
    }
    if(cnt>=k+1) ans++;

    cnt = 0;
  }

  cout<<ans;
  return 0;
}
