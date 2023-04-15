// ITSA.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
void split_Str(string s,string splchar,int current,vector<string>&buf) {
    int next;
    while (1) {
        next = s.find_first_of(splchar, current);
        if (next != current) {
            string tmp = s.substr(current, next - current);
            if (tmp.size() != 0) { //忽略空字串
                buf.push_back(tmp);
            }
        }
        if (next == string::npos) break;
        current = next + 1;
    }
}
int main()
{
    //a1蘋果(15) a2柳丁(20) 桃子(30)
    string input;
    vector<string> buf;
    int N = 0, a1 = 0, a2 = 0, a3 = 0,total=0;
    cin >> input;
    split_Str(input, ",", 0, buf);
    N = stoi(buf[0]); a1 = stoi(buf[1]); a2 = stoi(buf[2]); a3 = stoi(buf[3]);
    total = a1 * 15 + a2 * 20 + a3 * 30;
    if (total <= N) {
        total = N - total;
        int one = 0, five = 0, fifty = 0;
        fifty = total / 50;
        five = (total % 50) / 5;
        one = (total % 50) % 5;
        cout << one << "," << five << "," << fifty << endl;
    }
    else {
        cout << "0" << endl;
    }
    system("pause");
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
