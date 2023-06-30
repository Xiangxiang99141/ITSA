// ITSA.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//


#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int row, col,count=0; //row 行 col 列
	cin >> row >> col;
	int* array = new int[row * col];
	for (int i = 0; i < row * col; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			count++;
			cout << array[j * col + i];
			if (count % row != 0) cout << " ";
		}
		cout << endl;
	}
	delete[] array;
	return 0;
}

