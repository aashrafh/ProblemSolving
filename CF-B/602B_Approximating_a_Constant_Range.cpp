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
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false); }
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int a[100005], ans = -1, start = 1;
set<int> s, st;
int main()
{
	init();
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> a[i];
  multiset<int> cur;
  cur.insert(a[1]);
  int i = 1;
  while(i < n)
	{
		int Min = *cur.begin() , Max = *(--cur.end());
    if(a[i + 1] - Min <= 1 && Max - a[i + 1] <= 1){
           cur.insert(a[i + 1]);
           i++;
       }
       else{
           cur.erase(cur.find(a[start]));
           start++;
           if(cur.empty()){
               i++;
               cur.insert(a[i]);
           }
       }
       ans = max(ans, i - start + 1);
	}
	cout << ans << Endl;
	//system("PAUSE");
	return 0;
}
