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
int const g = 34943;

int main()
{
  init();
  string inputLine;
	while (getline(cin, inputLine)) {
		unsigned long message = 0;

		if (inputLine[0] == '#')
			break;

		for (int i = 0; i < inputLine.size(); i++) {
			message <<= 8;
			message += inputLine[i];
			message %= g;
		}
		message <<= 16;
		message %= g;

		int CRC = (g - message) % g;

		printf("%02X %02X\n", CRC >> 8, CRC % 256);
	}
  //system("PAUSE");
  return 0;
}
