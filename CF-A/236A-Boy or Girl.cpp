#include<iostream>
#include<algorithm>
#include<string>
#include<set>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	set<char> S;
	char s[105];
	cin>>s;
	for(int i=0; i<strlen(s); i++)
		S.insert(s[i]);
	int size = S.size();
	if(size%2==0)
		cout<<"CHAT WITH HER!"<<endl;
	else
		cout<<"IGNORE HIM!"<<endl;
	//system("PAUSE");
	return 0;
}
