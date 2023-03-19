// ITSA.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
//排序
//void cardsort(vector<string>& a, int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j=0; j < n; j++) {
//			if (a[i][0] > a[j][0]) {
//				string t;
//				t = a[i]; a[i] = a[j]; a[j] = t;
//			}
//		}
//	}
//}

void cardsort(vector<string>& a, int n) {
	vector<int> b;
	for (int i = 0; i < n; i++) {
		switch (a[i][0]) {
		case 'S':
			b.push_back(stoi(a[i].substr('S'))+400);
		case 'H':
			b.push_back(stoi(a[i].substr('H'))+300);
		case 'D':
			b.push_back(stoi(a[i].substr('D')) + 200);
		case 'C ':
			b.push_back(stoi(a[i].substr('D')) + 100);
		}
	}

	for (int i = 0; i < b.size(); i++) {
		for (int j=0; j < n; j++) {
			if (b[i] > b[j]) {
				int t;
				t = b[i]; b[i] = b[j]; b[j] = t;
			}
		}
	}
	a.clear();
	for (int i = 0; i < n; i++) {
		a.push_back(b[i]);
	}
	
}

int main()
{
	int n = 0;
	while (cin >> n) {
		string str1,s;
		vector<string> str2;
		vector<string> all;
		cin.ignore();
		for (int i = 0; i < n; i++) {
			getline(cin, str1);
			istringstream x(str1);
			while (getline(x, s, ' ')) {
				str2.push_back(s);
			}
			cardsort(str2, str2.size());
		//	string t;
		//	for (int j = 0; j < str2.size();j++) {
		//		if (i == str2.size() - 1) 
		//		{
		//			t += str2[j];
		//		}
		//		else{
		//			t += str2[j] + " ";
		//		}
		//	}
		//	str2.clear();
		//	all.push_back(t);
		//}
		//for (int i = 0; i < all.size(); i++) {
		//		cout << all[i] << endl;
		//}
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
