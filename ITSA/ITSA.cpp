// ITSA.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    char alp[][2] = {
        {'a','A'},{'b','B'},{'c','C'},{'d','D'},{'e','E'},{'f','F'},
        {'g','G'},{'h','H'},{'i','I'},{'j','J'},{'k','K'},{'l','L'},
        {'m','M'},{'n','N'},{'o','O'},{'p','P'},{'q','Q'},{'r','R'},
        {'s','S'},{'t','T'},{'u','U'},{'v','V'},{'w','W'},{'x','X'},
        {'y','Y'},{'z','Z'}
    };
    //char alp[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
    //    'h', 'i', 'j', 'k', 'l', 'm', 'n',
    //    'o', 'p', 'q', 'r', 's', 't', 'u',
    //    'v', 'w', 'x', 'y', 'z' };
    string str1 = "", t;
    while (getline(cin, str1)) {
        t = "";
        vector<string> splitstr;
        //transform(str1.begin(), str1.end(), str1.begin(), tolower);
        stringstream x(str1);
        while (getline(x, t, ' ')) {
            splitstr.push_back(t);
        }
        cout << splitstr.size() << endl;
        for (int i = 0; i < 26; i++) {
            if (count(str1.begin(), str1.end(), alp[i][0])!=0 || count(str1.begin(), str1.end(), alp[i][1]) != 0) {
                if (count(str1.begin(), str1.end(), alp[i][0]) != 0) {
                    cout << alp[i][0] << " : " << count(str1.begin(), str1.end(), alp[i][0]) << endl;
                }
                if (count(str1.begin(), str1.end(), alp[i][1]) != 0) {
                    cout << alp[i][0] << " : " << count(str1.begin(), str1.end(), alp[i][1]) << endl;
                }
            }
        }
    }
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
