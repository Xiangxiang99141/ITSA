// ITSA.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//


#include <iostream>  
#include <vector>  
#include <string>  
using namespace std;
void split2Vec(string, int, vector<int>&, string);
int main()
{

    int row = 0, col = 0; //row 行 col 列  
    cin >> row >> col;
    vector<int> buf;
    cin.ignore();
    for (int i = 0; i < row; i++) {
        string s;
        getline(cin, s);
        split2Vec(s, 0, buf, " ");
    }
    int count = 0;
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            if (count >= buf.size()) count = i;
            cout << buf[count] << " ";
            count += col;
        }
        cout << endl;
    }
    buf.clear();
    return 0;
}

void split2Vec(string s, int offset, vector<int>& buf, string symbol) {
    size_t next = 0;
    do {
        next = s.find_first_of(symbol, offset);
        if (offset != next) {
            int tmp = stoi(s.substr(offset, next - offset));
            buf.push_back(tmp); // 空字串不儲存  
        }
        offset = next + 1;
    } while (next != string::npos);
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
