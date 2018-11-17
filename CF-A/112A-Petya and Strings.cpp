#include <stdio.h>
#include <string.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	char S1[105];
	char S2[105];
	cin>>S1>>S2;
	int Slen = strlen(S1);
	for(int i=0; i<Slen; ++i)
	{
		S1[i] = tolower(S1[i]);
	    S2[i]=tolower(S2[i]);
	}
	int cmp = strcmp(S1, S2);
	cout<<cmp<<endl;
	//system("PAUSE");
	return 0;
}
