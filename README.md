# ITSA題目

## 題目
問題描述：   
迴文是指從前面讀和從後面讀都相同的一個數字或一段文字。例如下列每一五位數的整數都是迴文： 123321 ， 55555 ， 45554 ， 11611 。請撰寫一個程式，判斷它是否迴文。
   
輸入說明：   
輸入一個正整數。

輸出說明：   
迴文印出 ” 是 ” ；非回文印出 ” 否 ” 。

<table>
    <tr>
      <th>輸入範例:</th>
      <th>輸出範例:</th>
    </tr>
    <tr>
      <td align="center">123321</td>
      <td align="center">YES</td>
    </tr>
    <tr>
      <td align="center">1556551</td>
      <td align="center">YES</td>
    </tr>
    <tr>
      <td align="center">1244221</td>
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
    bool error = 0;
    string s;
    cin >> s;
    int ssize = s.size();
    for (int i = 0; i < ssize; i++) {
        if (s[i] == s[ssize - 1 - i]);
        else {
            error  = 1;
            break;
        }
    }
    if (!error) cout << "YES";
    else cout << "NO";
    cout << endl;
    return 0;
}
```

`#include <iostream>` 導入 iostream  
`int main(){}` 主程式區塊     
 - 宣告一個 `error` 布林變數，用來判斷有沒有比對失敗(預設為 `False(0)`)
 - 宣告一個 `s` 字串變數用來儲存輸入值
 - 使用 `cin` 將輸入值存入 `s`
 - 宣告一個 `ssize` 用來儲存字串大小
 - 使用 `for` 迴圈
     - 使用 `if` 比對字串反轉後是否相等
        - 成立 ==> 不做事  
        - 不成立 ==> 將 `error` 設為 `True(1)` 並跳出迴圈
 - 判斷 `error` 是否為 `False`
     - 成立 ==> 輸出 `YES`
     - 不成立 ==> 輸出 `NO`




### 結果
---
![結果](https://cdn.discordapp.com/attachments/1083434363968032828/1130848670145851463/image.png)
![ITSA](https://cdn.discordapp.com/attachments/1083434363968032828/1130848100253188096/image.png)