#include <bits/stdc++.h>
using namespace std;

char c[5][5];

int main()
{
    for(int i = 1; i <= 4; i++)
        for(int j = 1; j <= 4; j++)
            cin >> c[i][j];
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            int cnt = 0;
            cnt += c[i][j] == c[i][j];
            cnt += c[i][j] == c[i][j + 1];
            cnt += c[i][j] == c[i + 1][j];
            cnt += c[i][j] == c[i + 1][j + 1];
            if(cnt != 2){
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
}
