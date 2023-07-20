# ITSA題目

## 題目
問題描述：
輸入一段文字 ( 限制為 ASCII 表中，編號 32 至 125 之字元 ) ，將它們每個字元依照鍵盤的位置，印出它們右邊的字元，若右邊按鍵有兩層字元 ( 如 : 和 ; 位於同一按鍵上 ) ，則輸出下層字元，即 ”;” ，若該按鍵為上層字元 ( 如 !) 則輸出其右邊按鍵之上層字元 ( 如 @) ，若輸入的字元右邊的鍵為不可視按鍵，如 shift, enter,backspace 或右邊已無按鍵，如不做更動，照樣輸出。
   
輸入說明：   
輸入一行鍵盤上屬於 ASCII 表中編號 32 至 125 之字元，並以 enter 結束該行。   


輸出說明：   
輸出該行每個字元右邊位置的文字，除題目所述之例外字元除外。
最後必須有換行
   

<table>
    <tr>
      <th>輸入範例:</th>
      <th>輸出範例:</th>
    </tr>
    <tr>
      <td align="center">Qwer</td>
      <td align="center">wert</td>
    </tr>
    <tr>
      <td align="center">Adgj</td>
      <td align="center">sfhk</td>
    </tr>
	<tr>
      <td align="center">ehn6</td>
      <td align="center">rjm7</td>
    </tr>
</table>



### 程式碼 & 說明
---
```cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string ori = "!@#$%^&*()_++`1234567890-=={}||qwertyuiop[]\\:""asdfghjkl;''<>??zxcvbnm,.//";
	string input;
	getline(cin, input);
	int ori_len = ori.size();
	int len = input.size();
	for (int i = 0; i < len; i++) {
		input[i] = tolower(input[i]);
		for (int j = 0; j < ori_len; j++) {
			if (input[i] == ' ') {
				break;
			}
			else if (input[i] == ori[j]) {
				input[i] = ori[j + 1];
				break;
			}
		}
		cout << input[i];
	}
	cout << endl;
	return 0;
}
```

`#include <iostream>` 導入 iostream 函式庫   
`#include <string>` 導入 string 函式庫   
`int main(){}` 主程式區塊    

 宣告變數
 - `string ori`宣告一個用來儲存所有字元的字串
 - `string input` 宣告一個用來儲存輸入字串的變數
 - `int ori_len` 宣告一個整數變數，並將值設定為儲存所有字元的字串的長度
 - `int len` 宣告一個整數變數，並將值設為輸入字串長度

 `getline(cin,input)` 使用 `getline` 函數獲取一整行輸入   
 使用 `for` 迴圈 (範圍為0~ `len(輸入字串長度)`)
- 使用 `tolower` 函數將字串轉換為小寫(因為輸出為小寫)
- 使用 `for` 迴圈(範圍為0~ `ori_len`(存有所有符號的字串長度))
    - 判斷 輸入字串的第 `i` 位是否為空字元
    	- 是 == > 不改變    
		跳出迴圈
		- 否 == > 判斷 輸入字串的第 `i` 位是否與 符號字串的第 `j` 位相等
    		- 是 == > 設定為符號字串的 `j+1` 位字元   
			跳出迴圈
- 輸出輸入字串第 `i` 位

換行





### 結果
---
![結果](https://cdn.discordapp.com/attachments/1083434363968032828/1131268831935987722/image.png)
![ITSA](https://cdn.discordapp.com/attachments/1083434363968032828/1131268668022599700/image.png)