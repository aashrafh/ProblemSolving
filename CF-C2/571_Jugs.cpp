#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
struct state {
  int x, y, c;
};
int A, B, N;
bool vis[1005][1005];
state p[1005][1005];
queue<state> q;

void push(int a, int b, int c, state par) {
  if(vis[a][b]) return;
  state s = {a, b, c};
  q.push(s);
  p[a][b] = par;
  vis[a][b] = true;
}

void print(state s) {
  if(s.x == 0&& s.y == 0) return;
  print(p[s.x][s.y]);
  switch (s.c) {
    case 0: cout<<"fill A\n"; break;
    case 1: cout<<"fill B\n"; break;
    case 2: cout<<"empty A\n"; break;
    case 3: cout<<"empty B\n"; break;
    case 4: cout<<"pour A B\n"; break;
    case 5: cout<<"pour B A\n"; break;
  }
}

void bfs(int a, int b) {
  q = queue<state>();
  memset(vis, 0, sizeof vis);
  push(a, b, 6, state());

  while(!q.empty()) {
    state s = q.front(); q.pop();
    int a = s.x, b = s.y, a1, b1;
    if(b == N) {
      print(s);
      cout<<"success\n";
      return;
    }
    //fill A
    push(A, b, 0, s);
    //fill B
    push(a, B, 1, s);
    //empty A
    push(0, b, 2, s);
    //empty B
    push(a, 0, 3, s);
    //pour A B
    a1 = (a+b) > B ? (a+b)-B : 0;
    b1 = (a+b) > B ? B : (a+b);
    push(a1, b1, 4, s);
    //pour B A
    a1 = (a+b) > A ? A : (a+b);
    b1 = (a+b) > B ? (a+b)-A : 0;
    push(a1, b1, 5, s);
  }
}
int main()
{
  init();
  while(cin>>A>>B>>N) {
    bfs(0, 0);
  }
  return 0;
}
