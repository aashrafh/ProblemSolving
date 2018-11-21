#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> prog;
  vector<int> math;
  vector<int> PE;
  int x, t1=0, t2=0, t3=0;
  for (size_t i = 0; i < n; i++) {
    cin>>x;
    if(x==1) {t1++; prog.push_back(i+1);}
    else if(x==2) {t2++; math.push_back(i+1);}
    else {t3++; PE.push_back(i+1);}
  }
  int NoTeams = min(min(t1,t2),t3);
  cout<<NoTeams<<endl;
  for(int i=0; i<NoTeams; ++i)
  cout<<prog[i]<<" "<<math[i]<<" "<<PE[i]<<endl;
  return 0;
}
