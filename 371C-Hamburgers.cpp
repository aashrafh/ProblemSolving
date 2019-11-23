#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  string s; getline(cin, s);
  long long B=0,S=0,C=0;
  for(int i=0; i<s.size(); ++i)
  {
    if(s[i]=='B') ++B;
    else if(s[i]=='C') ++C;
    else if(s[i]=='S') ++S;
  }

  long long nb, ns, nc;
  scanf("%lld %lld %lld", &nb, &ns, &nc);

  long long pb, ps, pc;
  scanf("%lld %lld %lld", &pb, &ps, &pc);

  long long PC; scanf("%lld", &PC);

  long long mn=0, mx=10000000000000;
  while(mn+1<mx){
    long long mid = (mn+mx)/2;
    long long Pb = pb*( (mid*B>0) ? mid*B-nb : 0);
    long long Ps = ps*( (mid*S>0) ? mid*S-ns : 0);
    long long Pc = pc*( (mid*C>0) ? mid*C-nc : 0);
    long long CC = Pb+Ps+Pc;
    if(CC<=PC) mn=CC;
    else mx=CC;
  }
  printf("%lld\n", mn);
  return 0;
}
