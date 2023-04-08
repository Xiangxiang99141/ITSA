// ITSA.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
int main()
{
    string input,tmp;
    vector <string> split_str;
    getline(cin, input);
    if (input.size() <= 1000) {
        for (int i = 0; i < input.size(); i++) {
            input[i] = tolower(input[i]);
        }
        for (int i = 0; i < input.size(); i++) {
            if (input[i] != ' ') {
                tmp += input[i];
            }
            else {
                for (int j = 0; j < split_str.size(); j++) {
                    if (tmp == split_str[j]) {
                        tmp.clear();
                        break;
                    }
                }
                if (tmp.empty()) {
                    continue;
                }
                else {
                    split_str.push_back(tmp);
                    tmp.clear();
                }
            }
        }
        for (int i = 0; i < split_str.size(); i++) {
            cout << split_str[i];
            cout << (i == split_str.size() - 1 ? '\n' : ' ');
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
