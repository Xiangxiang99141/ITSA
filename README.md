# ITSA題目
## 題目5. 十進制轉二進制   
問題描述：
撰寫一個程式，使用者輸入一個整數，印出8位元的二進制表示。

輸入說明：
輸入一個整數，介於-128～127之間。   
輸出說明：
以8位元的二進制顯示。  
範例：

<table>
    <tr>
      <th>輸入範例:</th>
      <th>輸出範例:</th>
    </tr>
    <tr>
      <td align="center">15</td>
      <td align="center">00001111</td>
    </tr>
    <tr>
      <td align="center"> -2 </td>
      <td align="center">11111110</td>
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
    int a = 0;
    string str;
    while (cin >> a) {
        str="";
        if (a < 0) a += 256; 
        for (int i = 0; i < 8; i++) {
            str = str.insert(0, to_string(a % 2));
            a /= 2;
        }
        cout << str << endl ;
    }
    system("pause");
}
```

`#include <iostream>` 導入 iostream  
`#include <string>` 導入 string  
`int main(){}` 主程式區塊    
下面為宣告變數，依次為   

1. int a = 0;
   - 宣告用於儲存輸入值得整數變數
2. string str;
   - 宣告用於儲存轉換後的字串變數

使用**while**迴圈將值輸入至變數a  
- 1.將**str**變數初始為空字串  
- 2.判斷輸入的值是否小於0，如果小於0就先把他加256變成正數後再計算  
- 3.因為題目指定為8位元的2進制，所以使用for迴圈進行連除法
  - 1.將a除以**2**的餘數使用to_string函式轉換成整數後插入字串0的位置
  - 2.將a除以**2**的商存回a變數

- 4.將字串印出


### 結果
---

![LOCAL TEST](https://cdn.discordapp.com/attachments/1083434363968032828/1084489528573693962/image.png)
![結果](https://cdn.discordapp.com/attachments/1083434363968032828/1084489767363825764/image.png)
