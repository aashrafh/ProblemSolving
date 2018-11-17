#include<iostream>
#include<algorithm>
#include<string>
#include<set>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char s[1005];
	cin>>s;
	if(islower(s[0]))
		s[0]=toupper(s[0]);
	cout<<s<<endl;
	//system("PAUSE");
	return 0;
}
