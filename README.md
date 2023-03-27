# ITSA題目

## 題目16. 子字串出現次數
問題描述：
給予兩個英文字串，請計算出第一個字串出現在第二個字串中的次數。
   
輸入說明：
輸入分為兩行，第一行是由英文大小寫字母與數字所組成的字串，長度不超過 128 個字母。

第二行也是由英文大小寫字母與數字所組成的字串，長度不超過 512 個字母。   

輸出說明：第一個字串出現在第二個字串中的次數。


<table>
    <tr>
      <th>輸入範例:</th>
      <th>輸出範例:</th>
    </tr>
    <tr>
      <td>aa</br>aaa123bbab</td>
      <td align="center">2</td>
    </tr>
    <tr>
      <td>baba</br>12b3bbababa12</td>
      <td align="center">2</td>
    </tr>
    <tr>
      <td>baa</br>ababaabbbb</td>
      <td align="center">1</td>
    </tr>
</table>



### 程式碼 & 說明
---
```cpp
#include <iostream>
using namespace std;
int clacstrcount(string &s,int offset,string &l) {
    int a = 0;
    if (offset > l.length()) return a = 0;
    for (int i = 0; i < s.length(); i++) {
        if (l[i + offset] == s[i]) continue;
        else return a += clacstrcount(s, offset + 1, l);
    }
    a++;
    return a+=clacstrcount(s,offset+1,l);
}
int main()
{
    string str_input, str_all;
    while (cin >> str_input >> str_all) {
        cout << clacstrcount(str_input,0,str_all) << endl;
    }
}
```

`#include <iostream>` 導入 iostream  
   
宣告一個回傳值是整數的函數clacstrcount 
  - 傳入的參數  子字串的參考(&s) 偏移值(offset) 長字串的參考(&l)
  - 宣告一個整數變數 `a` 用來儲存出現次數
  - 判斷如果偏移大於長字串就回傳 `a=0` (表示子字串大於長字串)
  - 使用 `for` 迴圈，次數為子字串長度
    - 判斷長字串與子字串的字元是否相等
      - 如果是則使用 `contine` 進行下次迴圈
      - 否則 回傳 `a` 等於現在次數再加上重新跑函數，並將偏移值 `+1`
  - 迴圈結束 `a+1`，並回傳再加上重新跑函數，持續判斷到長字串結束
     
`int main(){}` 主程式區塊     
  - 宣告兩個字串變數 str_input, str_all  
  - 使用 `while` 一直分別讀入子字串及長字串到 `str_input` `str_all`
  - 輸出 計算子字串出現次數(傳入子字串,篇移值,長字串)





### 結果
---
![結果](https://cdn.discordapp.com/attachments/1083434363968032828/1089889988780511332/image.png)
![ITSA](https://cdn.discordapp.com/attachments/1083434363968032828/1089809588104208384/image.png)