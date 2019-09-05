#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int n;
vector<string> ans, t;
string a;
int b, c;
void play(){
  string s="";
  for(char i='0'; i<='9'; ++i){
    for(char j='0'; j<='9'; ++j){
      if(i != j){
        for(char k='0'; k<='9'; ++k){
          if(k!=j && k!=i){
            for(char l='0'; l<='9'; ++l){
              if(l!=k && l!=j && l!=i){
                s+=i, s+=j, s+=k, s+=l;
                ans.push_back(s);
                s="";
              }
            }
          }
        }
      }
    }
  }
}
pair<int, int> AC(string s, string ss) {
  int x = 0, y = 0;
  for(int i=0; i<4; ++i) if(s[i]==ss[i]) x++;
  for(int i=0; i<4; ++i) for(int j=0; j<4; ++j) {
    if(s[i] == ss[j]) {
      y++;
      break;
    }
  }
  return make_pair(x, y-x);
}
int main()
{
  init();
  play();
  cin>>n;
  for(int i=0; i<n; ++i) {
    cin>>a>>b>>c;
    for(auto s : ans) {
      if(AC(s, a) == make_pair(b, c)) t.push_back(s);
    }
    swap(ans, t);
    t.clear();
  }
  if(ans.size()==0) cout<<"Incorrect data\n";
  else if(ans.size()==1) cout<<ans[0]<<Endl;
  else cout<<"Need more data\n";
  return 0;
}
