#include<bits/stdc++.h>
using namespace std;
int main()
{
   string team1, team2;
   cin>>team1>>team2;
   int n; cin>>n;
   map<int, int> a;
   map<int, int> h;
   int min; char ch; int num; char card;
   while(n)
   {
     cin>>min>>ch>>num>>card;
     if(ch=='h'&&card=='y')
     {
       if(h.count(num)==0)
       {
         h[num]=1;
       }
       else if(h[num]==1)
       {
         h[num]==2;
         cout<<team1<<" "<<num<<" "<<min<<endl;
       }
       else if(h[num]==2)
       {
         h[num]=1;
       }
     }
     else if(ch=='a'&&card=='y')
     {
       if(a.count(num)==0)
       {
         a[num]=1;
       }
       else if(a[num]==1)
       {
         a[num]=2;
         cout<<team2<<" "<<num<<" "<<min<<endl;
       }
       else if(a[num]==2)
       {
         a[num]=1;
       }
     }
     else if(ch=='h'&&card=='r')
     cout<<team1<<" "<<num<<" "<<min<<endl;
     else
     cout<<team2<<" "<<num<<" "<<min<<endl;
     n--;
   }
   return 0;
}
