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

    //cin >> str_input;
    //cin >> str_all;
    cout << clacstrcount(str_input,0,str_all) << endl;
    }
}
```

`#include <iostream>` 導入 iostream  
`int main(){}` 主程式區塊     





### 結果
---
![結果]()
![ITSA](https://cdn.discordapp.com/attachments/1083434363968032828/1089809588104208384/image.png)