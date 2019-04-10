#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s, ans;
  cin>>s;
  int cnt = 0;
  for(int i=0; i<n; ++i)
  {
    if(i%2==0)
		ans.insert(0, 1, s[i]);
	else
		ans.push_back(s[i]);
  }

  if(s.size()%2)
	  reverse(ans.begin(), ans.end());
  cout<<ans<<endl;
  //system("PAUSE");
}
