#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int n, x;
int val[100000+5], a[100000+5];

int main ()
{
	scanf ("%d", &n);

	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);

	for (int i = 0; i < n; i++)
	{
		x = min (i, n - i - 1);
		if (a[i] - x > 0) val[a[i] - x]++;
	}

	int res = n;

	for (int i = 0; i < 100005; i++)
		res = min (res, n - val[i]);

	printf ("%d\n", res);

	return 0;
}
