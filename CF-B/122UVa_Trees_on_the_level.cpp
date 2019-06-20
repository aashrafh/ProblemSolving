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

struct node{
  int val;
  bool have_value;
  node *left, *right;
  node(): have_value(false), left(NULL), right(NULL) { };
};

node* root;
bool valid = true;
char s[300];
node* new_node() { return new node(); }

void add_node(int val, char* s)
{
  int nn = strlen(s);
  node* n = root;
  for(int i=0; i<nn; ++i)
  {
    if(s[i] == 'L')
    {
      if(!n->left) n->left = new_node();
      n = n->left;
    }
    else if(s[i] == 'R')
    {
      if(!n->right) n->right = new_node();
      n = n->right;
    }
  }
  if(n->have_value) valid = false;
  n->val = val;
  n->have_value = true;
}

void destroy_tree(node* root)
{
  if(!root) return;
  destroy_tree(root->left);
  destroy_tree(root->right);
  free(root);
}

bool read_input(){
    valid = true;
    destroy_tree(root);
    root = new_node();
    while(1){
        if(scanf("%s", s)!=1) return false;
        if(!strcmp(s,"()"))break;
        int v;
        sscanf(&s[1], "%d", &v); 
        add_node(v, strchr(s,',')+1);
    }
    return true;
}

vector<int> ans;
bool bfs()
{
  queue<node*> q;
  ans.clear();
  q.push(root);
  while(!q.empty())
  {
    node* n = q.front();
    q.pop();
    if(!n->have_value) return false;
    ans.push_back(n->val);
    if(n->left) q.push(n->left);
    if(n->right) q.push(n->right);
  }
  return true;
}

int main()
{
  init();
  while(read_input())
  {
    if(!bfs()) valid = false;
    if(!valid) cout<<"not complete\n";
    else
    {
      for(int i=0; i<ans.size(); ++i)
      {
        cout<<ans[i]<<" ";
      }
      cout<<Endl;
    }
  }
  //system("PAUSE");
  return 0;
}
