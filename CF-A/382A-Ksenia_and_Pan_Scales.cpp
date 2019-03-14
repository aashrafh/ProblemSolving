#include<bits/stdc++.h>
using namespace std;
int main()
{
  string right, left, not_used, tmp;
  cin>>tmp;
  cin>>not_used;
  int ind = tmp.find("|");
  left = tmp.substr(0, ind);
  right = tmp.substr(ind+1);
  for (auto pointer : not_used)
        if (left.size() <= right.size()) left += pointer;
        else right += pointer;
    cout << (left.size() == right.size() ? left + "|" + right : "Impossible") << endl;
  return 0;
}
