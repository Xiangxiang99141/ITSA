﻿// ITSA.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
//#include <array>
using namespace std;
int main()
{
    int row = 0, col = 0;
    string str1,t;
    vector<int> a[10];
    while (cin >> row >> col) {
        cin.ignore();
        for (int i = 0; i < row; i++) {
            getline(cin, str1);
            istringstream x(str1);
            int n = 0;
            while (getline(x, t, ' ')) {
                a[i].push_back(stoi(t));
            }
        }
        for (int i = 0; i < col; i++) {
            for (int j = 0; j < row; j++) {
                if (j == row - 1) cout << a[j][i];
                else cout << a[j][i] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i <= row-1; i++) {
            a[i] = {};
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
