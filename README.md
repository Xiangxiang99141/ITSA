# ITSA題目

## 題目
問題描述：   
請設計一程式，輸入一個陣列並且反轉後再輸出。
   
輸入說明：
第一行先輸入矩陣的行、列，之後再輸入陣列元素。   
   
輸出說明：
反轉後的矩陣。

<table>
    <tr>
      <th>輸入範例:</th>
      <th>輸出範例:</th>
    </tr>
    <tr>
		<td>
			2 1<br>
			3<br>
			2<br>
			3 2<br>
			4 6<br>
			7 8<br>
			4 6<br>
			2 4<br>
			7 8 9 10<br>
			6 5 22 4<br>
			4 2<br>
			4 5<br>
			2 3<br>
			4 5<br>
			6 9
		</td>
		<td>
			3 2<br>
			4 7 4<br>
			6 8 6<br>
			7 6<br>
			8 5<br>
			9 22<br>
			10 4<br>
			4 2 4 6<br>
			5 3 5 9
		</td>
    </tr>
</table>



### 程式碼 & 說明
---
```cpp
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
```

`#include <iostream>` 導入 iostream  
`int main(){}` 主程式區塊     

 - 宣告 `row` 、 `col` 、 `count` 三個整數變數用來儲存 `行` 、`列`
 - 使用 `cin`  將數值存入 `row` 、 `col` 兩個變數中
 - 宣告 `array` 整數指標變數，並使用 `new` 配置一個動態記憶體空間，大小為 `row` * `col` 用來儲存要反轉的數值
 - 使用 `for` 迴圈逐步將值儲存到 `array` 陣列中
 - 使用 `巢狀 for` 迴圈 印出數值
    - 將 count + 1 用於之後判斷是否要輸出空格
    - `j*row+i` 計算目前要輸出陣列中哪一個數值
	- 使用 `if` 判斷要不要輸出空格
 - 記憶體使用完後，使用 `delete` 將記憶體歸還



### 結果
---
![結果](https://cdn.discordapp.com/attachments/1083434363968032828/1124189323189821522/image.png)
![ITSA](https://cdn.discordapp.com/attachments/1083434363968032828/1124188950718861312/image.png)