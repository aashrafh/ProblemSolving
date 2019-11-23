#include<bits/stdc++.h>
using namespace std;
int n, d, k, x;
string name; long long int salary;
map<long long int, string> mp;
vector<long long int> vec;
inline bool inc(long long int a, long long int b) {return a>b;}
int main()
{
  cin>>n>>d>>k;
  for(int i=0; i<n; ++i)
  {
    cin>>name>>salary;
    mp[salary]=name;
    vec.push_back(salary);
  }
  sort(vec.begin(),vec.begin()+n, inc);
  long long int sum=0;
  for(int i=0; i<k; ++i)
  sum+=vec[i];
  if(sum<d)
  {
  cout<<"impossible\n";
  return 0;
}
  int r=1, l=k;
  x=k;
  while(r<l)
  {
    int mid = (r+l)/2;
    if(mid<k)
    {
      sum=0;
      for(int i=0; i<x; ++i)
      sum+=vec[i];
      if(sum>=d)
      {
        l=mid-1;
        x=mid;
      }
      else
      r=mid+1;
    }
    else
    l=mid-1;
  }
  cout<<x<<endl;
  for(int i=0; i<x; ++i)
  {
    cout<<mp[vec[i]]<<", YOU ARE FIRED!\n";
  }
  return 0;
}
