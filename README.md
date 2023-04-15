# ITSA題目

## 題目17. 英文斷詞
問題描述：
斷詞在自然語言的研究上是個很重要的步驟，主要就是將關鍵字從句子中斷出，英文的斷詞較為簡單，就根據句子中的空格將英文字隔開。
   
輸入說明：   
輸入一句英文敘述句。 字元數≤1000。   

輸出說明：   
將輸入的句子進行斷詞，將斷出的關鍵字依照句子中的出現排序列印出。全部轉成小寫，列印出的關鍵字不得重複，關鍵字間以一個空格隔開，最後一個關鍵字後面進行換行。例如輸入 How do you do ，則輸出 how do you 。   


<table>
    <tr>
      <th>輸入範例:</th>
      <th>輸出範例:</th>
    </tr>
    <tr>
      <td align="center">How do you do</td>
      <td align="center">how do you</td>
    </tr>
</table>



### 程式碼 & 說明
---
```cpp
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
int main()
{
    string input,tmp;
    vector <string> split_str;
    getline(cin, input);
    if (input.size() <= 1000) {
        for (int i = 0; i < input.size(); i++) {
            input[i] = tolower(input[i]);
        }
        for (int i = 0; i < input.size(); i++) {
            if (input[i] != ' ') {
                tmp += input[i];
            }
            else {
                for (int j = 0; j < split_str.size(); j++) {
                    if (tmp == split_str[j]) {
                        tmp.clear();
                        break;
                    }
                }
                if (tmp.empty()) {
                    continue;
                }
                else {
                    split_str.push_back(tmp);
                    tmp.clear();
                }
            }
            if (i == input.size() - 1){
                for (int j = 0; j < split_str.size(); j++) {
                    if (tmp == split_str[j]) {
                        tmp.clear();
                        break;
                    }
                }
                split_str.push_back(tmp);
                tmp.clear();
            }
        }
        for (int i = 0; i < split_str.size(); i++) {
            cout << split_str[i];
            cout << (i == split_str.size() - 1 ? '\n' : ' ');
        }
    }
    return 0;
}
```

`#include <iostream>` 導入 iostream  
`#include <string>` 導入 string    
`#include <vector>` 導入 vector     
`#include <cctype>` 導入 cctype     
`int main(){}` 主程式區塊     
  - string input,tmp; 宣告 `input` 字串變數用來儲存輸入字串 `tmp` 變數用來儲存暫存字串
  - vector <string> split_str; 宣告 `split_str` 動態字串變數
  - getline(cin, input); 讀取整行字串到 `input`
  -  if (input.size() <= 1000) 判斷字串小於1000字元





### 結果
---
![結果](https://cdn.discordapp.com/attachments/1083434363968032828/1096811926983544902/image.png)
![ITSA](https://cdn.discordapp.com/attachments/1083434363968032828/1096812308409364490/image.png)