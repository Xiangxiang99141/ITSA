# ITSA題目

## 題目
問題描述：
在電腦科學上 ，計算一串文字上各個字母出現的頻率是常被用到的技術，這對壓縮來講是很重要的資訊，而計算字數也可以幫助人們作校正的工具。一行文字被空白、逗點或是句點所分隔而形成很多字，例如 ”I have a pencil.” 這行字就有 I ， have ， a ， pencil 這四個字，即此行字數為 4 。所以現在要請你幫忙設計一個程式來計算一行文字的字 數及各個字母出現的次數。
   
輸入說明：輸入一行正常的英文文字，也就是不要有開頭是空白或是有連續兩個 空白的情形發生，並且內容只能包含英文字母、空白、逗點、句點。 注意 : 輸入的字串長度最多是 100 。

輸出說明：第一行輸出一個正整數 n ，表示此行文字的字數。 第二行開始依序輸出在此行文字中有出現的字母及出現的次數。 注意 : 大小寫不分，輸出小寫字母。


<table>
    <tr>
      <th>輸入範例:</th>
      <th>輸出範例:</th>
    </tr>
    <tr>
      <td>I had a dog</td>
      <td>
        4</br>
        a : 2</br>
        d : 2</br>
        g : 1</br>
        h : 1</br>
        i : 1</br>
        o : 1
      </td>
    </tr>
</table>



### 程式碼 & 說明
---
```cpp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    char alp[][2] = {
        {'a','A'},{'b','B'},{'c','C'},{'d','D'},{'e','E'},{'f','F'},
        {'g','G'},{'h','H'},{'i','I'},{'j','J'},{'k','K'},{'l','L'},
        {'m','M'},{'n','N'},{'o','O'},{'p','P'},{'q','Q'},{'r','R'},
        {'s','S'},{'t','T'},{'u','U'},{'v','V'},{'w','W'},{'x','X'},
        {'y','Y'},{'z','Z'}
    };
    string str1 = "", t;
    while (getline(cin, str1)) {
        vector<string> splitstr;
        stringstream x(str1);
        while (getline(x, t, ' ')) {
            splitstr.push_back(t);
        }
        cout << splitstr.size() << endl;
        for (int i = 0; i < 26; i++) {
            if (count(str1.begin(), str1.end(), alp[i][0]) != 0) {
                cout << alp[i][0] << " : " << count(str1.begin(), str1.end(), alp[i][0]) << endl;
            }
            if (count(str1.begin(), str1.end(), alp[i][1]) != 0) {
                cout << alp[i][0] << " : " << count(str1.begin(), str1.end(), alp[i][1]) << endl;
            }
        }
    }
}
```

`#include <iostream>` 導入 iostream   
`#include <sstream>` 導入 sstream   
`#include <string>` 導入 string   
`#include <vector>` 導入 vector   
`#include <algorithm>` 導入 algorithm   
`int main(){}` 主程式區塊   
- 定義26個英文字母大小寫的2維陣列
```cpp
char alp[][2] = {
    {'a','A'},{'b','B'},{'c','C'},{'d','D'},{'e','E'},{'f','F'},
    {'g','G'},{'h','H'},{'i','I'},{'j','J'},{'k','K'},{'l','L'},
    {'m','M'},{'n','N'},{'o','O'},{'p','P'},{'q','Q'},{'r','R'},
    {'s','S'},{'t','T'},{'u','U'},{'v','V'},{'w','W'},{'x','X'},
    {'y','Y'},{'z','Z'}
};
```
- string str1 = "", t; 宣告兩個字串 `str1` 用來儲存輸入的字串  `t` 用來儲存暫存的字串
- 使用 `while (getline(cin, str1))` 讀入整行的字串
    - vector\<string> splitstr 宣告一的動態的字串陣列
    - stringstream x(str1) 將 `str1` 轉換成可以分割的字串
      - 再使用 `while (getline(x, t, ' '))` 將字串用 `" "` 分割
        - splitstr.push_back(t); 將依照 `" "` 分割出來的字串存入 `splistr`
      - cout << splitstr.size() << endl; 使用 `size()` 類別將輸入字串有幾個字印出來
      ```cpp
      for (int i = 0; i < 26; i++) {
            if (count(str1.begin(), str1.end(), alp[i][0]) != 0) {
                cout << alp[i][0] << " : " << count(str1.begin(), str1.end(), alp[i][0]) << endl;
            }
            if (count(str1.begin(), str1.end(), alp[i][1]) != 0) {
                cout << alp[i][0] << " : " << count(str1.begin(), str1.end(), alp[i][1]) << endl;
            }
        }
      ```
      使用 `for迴圈` 逐次判斷26的英文字母
      - 用 `if` 判斷 用 `count()` 函數計算英文字母出現幾次 如果 `count()` 回傳 `0` 表示沒有，則不印出





### 結果
---
![結果](https://cdn.discordapp.com/attachments/1083434363968032828/1087352976961703977/image.png)
![ITSA](https://cdn.discordapp.com/attachments/1083434363968032828/1087352853020016720/image.png)