#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
typedef long long int ll;
using namespace std;

/*bool isPrime(ll n)    //////It doesn't fit in time " Time limit Exceeded" ////////
{
  if(n==2) return true;
  if(n<2 || n%2==0) return false;

  for(int i=3; i*i<=n; i+=2)
  {
    if(n%i==0) return false;
  }
  return true;
}

/*int cntP(ll n)
{
  int cnt = 0;
  while(!isPrime(n))
  {
    n++;
    cnt++;
  }
  return cnt;
}*/

int main() {
	bool primes[100005];
	primes[0]=primes[1]=false;
	fill(primes+2, primes+100005, true);
	for(int i=2; i*i<100005; ++i)
	{
		if(primes[i])
		{
			for(int j=i*2; j<100005; j+=i)
				primes[j]=false;
		}
	}
  int n,m;
  cin>>n>>m;
  vector< vector<int> > cnt( n, vector<int>(m) );
  int minR = INT_MAX;
  int minC = INT_MAX;
  ll x;
  for(int i=0; i<n; ++i)
  {
    int sum = 0;
    for(int j=0; j<m; ++j)
    {
    cin>>x;
	int temp=x;
    while(!primes[temp])
		temp++;
	cnt[i][j]=temp-x;
	sum+=cnt[i][j];
	}
    if(sum<minR)  minR = sum;
  }
  for(int j=0; j<m; ++j)
  {
    int sum = 0;
    for(int i=0; i<n; ++i)
	{
		sum+=cnt[i][j];
	}
	if(sum<minC)  minC = sum;
  }
  cout<<min(minC, minR)<<endl;
  //system("PAUSE");
  return 0;
}
