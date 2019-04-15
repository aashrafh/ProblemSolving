#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#define Endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  int n;
  cin>>n;
  vector<int> a(n+5);
  set<int> s;
  for(int i=0; i<n; ++i)
  {
    cin>>a[i];
    s.insert(a[i]);
  }
  vector<int> ans;
  set<int>::iterator it;
  int i=0, l = 100005, r = -1;
  for(it = s.begin(); it!=s.end(); ++it)
  {
    if(*it != a[i])
    {
      l = min(l, i);
      r = max(r, i);
    }
    i++;
  }
  if(r == -1)
  {
    cout<<"yes\n";
    cout<<1<<" "<<1<<Endl;
  }
  else
  {
    reverse(a.begin()+l, a.begin()+r+1);
    bool bad = false;
    i = 0;
    for(it = s.begin(); it!=s.end(); ++it)
    {
      if(*it != a[i])
      {
        bad = true;
      }
      i++;
    }
    if(!bad)
    {
      cout<<"yes\n"<<l+1<<" "<<r+1<<Endl;
    }
    else cout<<"no\n";
  }
  return 0;
}
