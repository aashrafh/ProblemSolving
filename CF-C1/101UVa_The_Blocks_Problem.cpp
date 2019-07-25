#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#include<deque>
#include <bitset>
#include <cstdio>
#define Endl "\n"
#define LL long long
#define F first
#define S second
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int n, block[30];
stack<int> pile[30];
char s1[10], s2[10];

void move_onto(int a, int b)
{
  while(pile[block[a]].top() != a)
  {
    int top = pile[block[a]].top();
    block[top] = top;
    pile[top].push(top);
    pile[block[a]].pop();
  }

  while(pile[block[b]].top() != b)
  {
    int top = pile[block[b]].top();
    block[top] = top;
    pile[top].push(top);
    pile[block[b]].pop();
  }

  pile[block[a]].pop();
  block[a] = block[b];
  pile[block[b]].push(a);
}


void move_over(int a, int b) {
    while (pile[block[a]].top() != a) {
        int top = pile[block[a]].top();
        block[top] = top;
        pile[top].push(top);
        pile[block[a]].pop();
    }

    pile[block[a]].pop();
    block[a] = block[b];
    pile[block[b]].push(a);
}


void pile_onto(int a, int b) {
    while (pile[block[b]].top() != b) {
        int top = pile[block[b]].top();
        block[top] = top;
        pile[top].push(top);
        pile[block[b]].pop();
    }

    stack<int> tmp;
    while (pile[block[a]].top() != a) {
        tmp.push(pile[block[a]].top());
        pile[block[a]].pop();
    }

    tmp.push(a);
    pile[block[a]].pop();

    while (!tmp.empty()) {
        pile[block[b]].push(tmp.top());
        block[tmp.top()] = block[b];
        tmp.pop();
    }
}

void pile_over(int a, int b) {
    stack<int> tmp;
    while (pile[block[a]].top() != a) {
        tmp.push(pile[block[a]].top());
        pile[block[a]].pop();
    }

    tmp.push(a);
    pile[block[a]].pop();

    while (!tmp.empty()) {
        pile[block[b]].push(tmp.top());
        block[tmp.top()] = block[b];
        tmp.pop();
    }
}

void result() {
    stack<int> tmp;
    REP(i, n) {
        printf("%d:", i);
        while (!pile[i].empty()) {
            tmp.push(pile[i].top());
            pile[i].pop();
        }
        while (!tmp.empty()) {
            printf(" %d", tmp.top());
            tmp.pop();
        }
        putchar('\n');
    }
}

main() {
//    FileIn("test"); FileOut("test");
    while (scanf("%d", &n) != EOF) {
        REP(i, n) {
            pile[i].push(i);
            block[i] = i;
        }
        int a, b;
        while (scanf("%s", &s1) != EOF) {
            if (s1[0] == 'q') break;
            scanf("%d %s %d ", &a, &s2, &b);

            if (a == b || block[a] == block[b]) continue;
            if (s1[0] == 'm') {
                if (s2[1] == 'n') move_onto(a, b);
                else move_over(a, b);
            }
            else {
                if (s2[1] == 'n') pile_onto(a, b);
                else pile_over(a, b);
            }
        }
        result();
    }
}
