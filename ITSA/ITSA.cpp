// ITSA.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main()
{
    int start_h = 0, start_m = 0;
    int end_h = 0, end_m = 0;
    int time = 0;
    int cost = 0;
    /*scanf("%d %d", &start_h, &start_m);
    scanf("%d %d", &end_h, &end_m);*/
    cin >> start_h >> start_m;
    cin >> end_h >> end_m;
    time = (end_h * 60 + end_m) - (start_h * 60 + start_m);
    if (time >= 0 && time <= 120) {
        cost = (time / 30) * 30;
    }
    else if (time > 120 && time <= 240) {
        cost = 120 + (time - 120)/30*40;
    }
    else {
        cost = 120 + 160 + ((time - 120) - 120) / 30 * 60;
    }
    cout << cost << endl;
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
