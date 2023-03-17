# ITSA題目

## 題目9. 計算正整數被3整除之數值之總和
問題描述：
試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。
   
輸入說明：輸入一正整數。

輸出說明：輸出總和。


<table>
    <tr>
      <th>輸入範例:</th>
      <th>輸出範例:</th>
    </tr>
    <tr>
      <td align="center">100</td>
      <td align="center">1683</td>
    </tr>
    <tr>
      <td align="center">150</td>
      <td align="center">3825</td>
    </tr>
</table>



### 程式碼 & 說明
---
```cpp
#include <iostream>
using namespace std;
int main()
{
    int input = 0,sum=0;
    while(cin >> input)
    {
        sum=0;
        for (int i = 1; i <= input; i++) {
            if (i % 3 == 0) {
                sum += i;
            }
        }
        cout << sum << endl;
    }
}
```

`#include <iostream>` 導入 iostream  
`int main(){}` 主程式區塊     

int input=0,sum=0
   - 宣告 `input` 整數變數用來儲存輸入值，並將初始值設為0
   - 宣告 `sum` 整數變數用來儲存計算後的總和並將初始值設為0，避免出錯

使用 **`while(cin >> input){}`** 持續將資料輸入至 `input` 變數  
   - 1.將sum值歸0，避免出錯
   - 2.使用 **`for`** 迴圈從1一直到 `輸入值`(題目指定)
        - 如果 `i` 取 `3` 的餘數為 `0`  
        那麼就代表說它可被3整除，`sum` 等於 `sum+1` 
   - 3.輸出 `sum`



### 結果
---
![結果](https://cdn.discordapp.com/attachments/1083434363968032828/1086158807530483843/image.png)
![ITSA](https://cdn.discordapp.com/attachments/1083434363968032828/1086159015010123786/image.png)