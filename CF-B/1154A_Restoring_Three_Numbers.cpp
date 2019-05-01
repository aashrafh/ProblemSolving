#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#define Endl "\n"
#define LL long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}

int main()
{
  init();
  int arr[4];
  cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
  sort(arr, arr+4);
  int a, b, c;
  c = arr[3] - arr[0];
  a = arr[2] - c;
  b = arr[1] - c;
  cout<<a<<" "<<b<<" "<<c<<"\n";
  return 0;
}
