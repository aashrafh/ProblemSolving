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
int fact (int n){
  if(n==0 || n==1)
   return 1;

  else
   return n*fact(n-1);
}
int main()
{
  init();
  string s1, s2;
  cin>>s1>>s2;
  bool q = false;
  int c1 = 0, c2 = 0, num_q = 0;
  for(int i=0; i<s1.size(); ++i)
  {
    if(s1[i] == '+') c1++;
    else c1--;
  }
  for(int i=0; i<s2.size(); ++i)
  {
    if(s2[i] == '+') c2++;
    else if(s2[i] == '-') c2--;
    else
    {
      q = true;
      num_q++;
    }
  }
  if(!q)
  {
    if(c1 == c2) printf("%.12f\n", 1.0);
    else printf("%.12f\n", 0.0);
  }
  else
  {
    int diff = c1 - c2;
    int ind = diff+num_q;
    if(ind%2 == 0 && ind/2>=0 && ind/2<=num_q){
       int ans=fact(num_q)/(fact(num_q-ind/2)*fact(ind/2));
       printf("%0.12f",double(ans)/double(pow(2,num_q)));
     }
     else
       printf("%.12f\n", 0.0);
  }
  return 0;
}
