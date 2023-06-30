// ITSA.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
    bool error = 0;
    string s;
    cin >> s;
    int ssize = s.size();
    for (int i = 0; i < ssize; i++) {
        if (s[i] == s[ssize - 1 - i]);
        else {
            error  = 1;
            break;
        }
    }
    if (!error) cout << "YES";
    else cout << "NO";
    cout << endl;
    return 0;
}

