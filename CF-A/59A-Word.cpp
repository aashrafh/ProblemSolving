#include<iostream>
#include<algorithm>
#include<string>
#include<set>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char s[105];
	cin>>s;
	int lower=0, upper=0;
	for(int i=0; i<strlen(s); ++i)
		if(islower(s[i]))
			lower++;
		else
			upper++;

	if(lower>=upper)
	{
		for(int i=0; i<strlen(s); ++i)
			s[i]=tolower(s[i]);
	}
	else
		for(int i=0; i<strlen(s); ++i)
			s[i]=toupper(s[i]);
	cout<<s<<endl;
	//system("PAUSE");
	return 0;
}
