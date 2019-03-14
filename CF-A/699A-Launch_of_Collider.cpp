#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   string s;
   cin>>n;
   cin>>s;
   int a[n+5];
   int ans = 0x3f3f3f3f;
   for(int i=0; i<n; ++i)
   {
       cin>>a[i];
       if(i==0) continue;
       if(s[i] == 'L' && s[i-1] == 'R')
       {
           ans = min(ans,(a[i]-a[i-1])/2);
       }
   }
   if(ans == 0x3f3f3f3f) cout<<-1<<endl;
   else cout<<ans<<endl;
    return 0;
}
