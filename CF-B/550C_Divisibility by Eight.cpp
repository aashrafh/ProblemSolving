#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#define Endl "\n"
#define LL long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int a[105];
int main()
{
  init();
  string s;
	cin >> s;
	int n = s.length();
	for (int i = 0; i < n; i++)
		a[i] = s[i]-'0';
	for (int i = 0; i < n; i++)
	{
		if (a[i]%8 == 0)
		{
			cout << "YES" << endl;
			cout << a[i] << endl;
			return 0;
		}
		for (int j = i+1; j < n; j++)
		{
			if ((a[i]*10 + a[j])%8 == 0)
			{
				cout << "YES" << endl;
				cout << a[i]*10 + a[j] << endl;
				return 0;
			}
			for (int k = j+1; k < n; k++)
			{
				if ((a[i]*100 + a[j]*10 + a[k])%8 == 0)
				{
					cout << "YES" << endl;
					cout << a[i]*100 + a[j]*10 + a[k] << endl;
					return 0;
				}
			}
		}
	}
	cout << "NO" << endl;
    return 0;
}
