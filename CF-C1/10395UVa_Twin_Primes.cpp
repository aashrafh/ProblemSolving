#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#include<deque>
#include <cstdio>
#define Endl "\n"
#define LL long long
#define F first
#define S second
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false); }
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
const int _max = 130000;
int primes[_max];
void Sieve(int n)
{
	vector<bool> prime(n + 1, true);
	for (int p = 2; p*p <= n; p++)
	{
		if (prime[p] == true)
		{
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
	int j = 0;
	for (int p = 2; p <= n; p++)
		if (prime[p])
			primes[j++] = p;
}

int main()
{
	init();
	Sieve(_max);
	int s;
	while (scanf("%d\n", &s) == 1)
	{
		cout << '(' << primes[s - 1] << ", " << primes[s] << ')' << Endl;
	}
	system("PAUSE");
	return 0;
}
