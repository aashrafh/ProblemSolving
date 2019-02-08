#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a(1005);
vector<int> b(1005);
vector<int> sorted_b(1005);

int main()
{
  bool f1 = false;
  cin>>n;
  for(int i=0; i<n; ++i)
  {
     cin>>a[i]>>b[i];
     if(a[i] != b[i]) f1 = true;
  }

  if(f1)
  {
    cout<<"rated\n";
    return 0;
  }

  for(int i=0; i<n-1; ++i)
  {
    if(a[i] < a[i+1])
    {
      cout<<"unrated\n";
      return 0;
    }
  }

  cout<<"maybe\n";
  return 0;
}
