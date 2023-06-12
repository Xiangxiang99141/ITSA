# ITSA題目

## 題目19. 最少派車數
問題描述：   
給定下列遞迴函式 :   
![Ques](https://cdn.discordapp.com/attachments/1083434363968032828/1117745539417636874/C_RU06.JPG)
   
輸入說明：
輸入值為一個大於 1 的整數。
   
輸出說明：
f(k) 的計算結果。

<table>
    <tr>
      <th>輸入範例:</th>
      <th>輸出範例:</th>
    </tr>
    <tr>
      <td align="center">10</td>
      <td align="center">60</td>
    </tr>
    <tr>
      <td align="center">12</td>
      <td align="center">94</td>
    </tr>
</table>



### 程式碼 & 說明
---
```cpp
#include <iostream>
using namespace std;
int fibo(int a) {
    if (a == 0 || a == 1)
        return a + 1;
    else if (a > 1) {
        return fibo(a-1) + fibo(a / 2);
    }
}
int main()
{
    int Input = 0;
    cin >> Input;
    cout << fibo(Input) << endl;
    return 0;
}
```


`#include <iostream>` 導入 iostream  
`int main(){}` 主程式區塊     
宣告一個 `Input` 整數變數用來儲存輸入值

建立一個 `fibo(int a)` 函數並傳入一個整數 a
 - 判斷輸入值 `a` 是不是等於 `0` 或 `1`   
 如果是就回傳 a+1   
 否則如果 `a>1` 就回傳呼叫 fibo(a-1) + fibo(n/2)

### 撰寫邏輯
依照題目所知，當 `n=0` 或是 `n=1` 時結果為 `n-1`   
`n>1` 時結果為 f(n-1)+f(n/2)

### 結果
---
![結果](https://cdn.discordapp.com/attachments/1083434363968032828/1117748779882401832/image.png)
![ITSA](https://cdn.discordapp.com/attachments/1083434363968032828/1117748610952609802/image.png)