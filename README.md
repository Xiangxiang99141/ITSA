# ITSA題目

## 題目8. 質數判別
問題描述：
試撰寫一個程式，由輸入一個整數，然後判別此數是否為質數。質數是指除了 1 和它本身之外，沒有其它的數可以整除它的數，例如， 2, 3, 5, 7 與 11 等皆為質數。

輸入說明：輸入一個正整數。
   
輸出說明：質數顯示 YES ；非質數顯示 NO 。
   

<table>
    <tr>
      <th>輸入範例:</th>
      <th>輸出範例:</th>
    </tr>
    <tr>
      <td align="center">23</td>
      <td align="center">YES</td>
    </tr>
    <tr>
      <td align="center">37</td>
      <td align="center">YES</td>
    </tr>
    <tr>
      <td align="center">39</td>
      <td align="center">NO</td>
    </tr>
</table>



### 程式碼 & 說明
---
```cpp
#include <iostream>
using namespace std;
int main()
{
    int input = 0;
    while(cin >> input)
    {
        bool check = true;
        for (int i = 2; i <= input - 1; i++) {
            if (input % i == 0) {
                check = false;
                break;
            }
        }
        if (check == true) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}
```

`#include <iostream>` 導入 iostream  
`int main(){}` 主程式區塊     

int input = 0;
   - 宣告用於儲存輸入值的整數變數

使用 **`while(cin >> input){}`** 持續將資料輸入至 `input` 變數  
   - 1.宣告一個 `check` 布林變數用於儲存檢查數值是否有可以整除的質並將值設為true，避免出錯
   - 2.使用 **`for`** 迴圈從2一直到 `輸入值-1`
        - 註：因為質數是指除了1和自己以外沒有其他整數值可以整除自己
        - 如果有數值取 `i` 的餘數為 `0` (即表示整除)  
        那麼就代表說他不是質數，將check設為 `false`，並跳出迴圈
   - 3.使用 `if` 判斷 `check`
     - 如果為 `true` 表示為質數，輸出 `YES`
     - 否則輸出 `NO` (即不是質數)



### 結果
---
![結果](https://cdn.discordapp.com/attachments/1083434363968032828/1086134342562107492/image.png)
![ITSA](https://cdn.discordapp.com/attachments/1083434363968032828/1086134519490424892/image.png)