#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
long long  a[200001],k[200001],sum,mkan,n,q;
int main()
{
    cin >> n >> q;
    for(int i=0;i<n;++i){
        cin >> a[i];
        if(i)a[i]+=a[i-1];
    }
    for(int i=0;i<q;++i)
        cin >> k[i];
    for(int i=0;i<q;++i){
        sum+=k[i];
         mkan=upper_bound(a,a+n,sum)-a;
        if(mkan==n){sum=0;cout<<n<<endl;continue;}
        cout<<n-mkan<<endl;
    }
}
