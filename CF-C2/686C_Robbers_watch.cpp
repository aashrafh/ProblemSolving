#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int main()
{
  init();
  size_t n, m;
    cin >> n >> m;

    size_t len1 = 1, len2 = 1;
    for (size_t a = 7; a < n; a *= 7)
        len1 += 1;
    for (size_t b = 7; b < m; b *= 7)
        len2 += 1;

    size_t ans = 0;
    if (len1 + len2 <= 7)
        for (size_t i = 0; i != n; ++i)
            for (size_t j = 0; j != m; ++j) {
                vector<size_t> used(7, 0);

                for (size_t a = i, k = 0; k != len1; a /= 7, ++k)
                    used[a % 7] += 1;
                for (size_t b = j, k = 0; k != len2; b /= 7, ++k)
                    used[b % 7] += 1;

                if (*std::max_element(used.begin(), used.end()) <= 1)
                    ++ans;
            }

    cout << ans << "\n";
  return 0;
}
