#include <bits/stdc++.h>
#define endn "\n"
using namespace std;
long long n, m, type[100005], val[100005], c[100005], l[100005], len[100005], a[100005];
void play() {
  int cnt = 1;
  for(int i=1; i<=m; ++i){
    if(type[i] == 1){
      a[cnt++] = val[i];
      if(cnt>=100000) return;
    }
    else {
      for(int j=1; j<=c[i]; ++j) {
        for(int k=1; k<=l[i]; ++k) {
          a[cnt++] = a[k];
          if(cnt>=100000) return;
        }
      }
    }
  }
}
int bs(long long x) {
  int ll=1,r=m,mid;
  	while (ll!=r)
  	{
  		mid=(ll+r)/2;
  		if (x<=len[mid]) r=mid;else ll=mid+1;
  	}
  	if (type[ll]==1) return val[ll];
  	else return a[(x-len[ll-1]-1)%l[ll]+1];
}
int main()
{
  cin.tie(0);
  cout.tie(0);
  ios::sync_with_stdio(false);
  cin>>m;
  for(int i=1; i<=m; ++i) {
    cin>>type[i];
    if(type[i]==1) {
      cin>>val[i];
      len[i] = len[i-1]+1;
    }
    else {
      cin>>l[i]>>c[i];
      len[i] = len[i-1] + l[i]*c[i];
    }
  }
  play();
  cin>>n;
  for(int i=1; i<=n; ++i) {
    long long x; cin>>x;
    cout<<bs(x)<<" ";
  }
  cout<<endn;
  return 0;
}
