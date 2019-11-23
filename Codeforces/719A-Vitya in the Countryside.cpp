#include<bits/stdc++.h>
using namespace std;
int a[100];
int main()
{
	int n,i,j,k,l;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=n;i++)
		cin>>a[i];
		if(n==1&&a[n]!=15&&a[n]!=0)
		{
			cout<<-1<<endl;
		}
		else if(a[n]==15)
		cout<<"DOWN\n";
		else if(a[n]==0)
		cout<<"UP\n";
		else if(a[n]<15&&a[n]>a[n-1])
		cout<<"UP\n";
		else if(a[n]<15&&a[n]<a[n-1])
    cout<<"DOWN\n";
	}
  return 0;
}
