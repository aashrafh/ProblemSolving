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
#define inf 0x3f3f3f3f3f3f3f3fll
#define BOUND 50000
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
vector<int> sieve() {
    bitset<BOUND> bs;
    bs.set();
    bs[0] = bs[1] = true;
    vector<int> primes;

    for (long long i = 2; i < BOUND; i++)
        if (bs[i]) {
            for (long long j = i * i; j < BOUND; j += i)
                bs[j] = false;
            primes.push_back((int)i);
        }
    return primes;
}

int main()
{
  int n, m;

      vector<int> primes = sieve();

      while (scanf("%d %d", &n, &m) == 2) {
          map<int, int> counter;
          int factors = 0, index = 0, prime = primes[index];

          int M = m;
          while (prime * prime <= m) {
              while (M % prime == 0) {
                  M /= prime;
                  counter[prime]++;
                  factors++;
              }
              prime = primes[++index];
          }

          if (M != 1) {
              counter[M]++;
              factors++;
          }

          for (auto it = counter.begin(); it != counter.end(); it++) {
              int N = it->first;
              while (N <= n && it->second) {
                  int temp = N;
                  while (it->second && temp % it->first == 0) {
                      temp /= it->first;
                      it->second--;
                      factors--;
                  }
                  N += it->first;
              }
              if (it->second)
                  break;
          }

          if (factors)
              printf("%d does not divide %d!\n", m, n);
          else
              printf("%d divides %d!\n", m, n);
      }

  	return 0;
  }
