#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#define endl "\n"
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
string s1, s2;
void add(string s)
{
	if(s1.size()>s2.size()) swap(s1, s2);
	int n1 = s1.size(), n2 = s2.size();

	int carry = 0;
	for(int i=0; i<n1; ++i)
	{
		int sum = ((s1[i]-'0')+(s2[i]-'0')+carry);
		s.push_back(sum%10 + '0');
		carry = sum/10;
	}
	for(int i=n1; i<n2; ++i)
	{
		int sum = ((s2[i]-'0')+carry);
		s.push_back(sum%10 + '0');
		carry = sum/10;
	}

	if(carry)
		s.push_back(carry+'0');

	while(s[0] == '0')
		s.erase(s.begin());

	cout<<s<<endl;
}
int main()
{
  init();
  int n;
  cin>>n;
  while(n--)
  {
	  cin>>s1>>s2;
	  //reverse(s1.begin(), s1.end());
	  //reverse(s2.begin(), s2.end());
	  string s = "";
	  add(s);
  }
  //system("PAUSE");
  return 0;
}
