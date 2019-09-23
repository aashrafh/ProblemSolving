#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int a[100005];
int main()
{
    init();
    int n, s, v(0);
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) if (a[i] > a[i + 1]) s = i, v++;
    if (a[n - 1] > a[0]) s = n - 1, v++;
    if (v == 0) cout << 0 << endl;
    else if (v > 1) cout << -1 << endl;
    else cout << n - 1 - s << endl;
    return 0;
}
