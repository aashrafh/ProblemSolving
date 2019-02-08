#include<bits/stdc++.h>
using namespace std;

set<int> st;

int main()
{
  int n, p, q;
  cin>>n;
  cin>>p;
  for(int i=0; i<p; ++i)
  {
    int x;
    cin>>x;
    st.insert(x);
  }
  cin>>q;
  for(int i=0; i<q; ++i)
  {
    int x;
    cin>>x;
    st.insert(x);
  }

  int tmp = n, ans=0;
  while(n)
  {
    set<int>::iterator i;
    for(i=st.begin(); i!=st.end(); ++i)
    {
      if(*i == n) ans++;
    }

    n--;
  }

  if(ans == tmp) cout<<"I become the guy.\n";
  else cout<<"Oh, my keyboard!\n";
}
