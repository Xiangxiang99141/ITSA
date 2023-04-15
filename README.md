# ITSA題目

## 題目23. 找零錢問題
問題描述：
假設銅板有1元、5元、50元共三種，媽媽請小明去菜市場買水果，給了小明N元，且媽媽交待，要老闆找小明的零錢的數目要最少，而小明到了水果攤買了a1顆蘋果，a2顆柳丁，及a3顆桃子，1顆蘋果15元，1顆柳丁20元，1顆桃子30元，請問老問需找多少個1元、5元、50元，其銅板數目最少。
   
輸入說明：
先輸入媽媽給小明多少錢，N，接著輸入a1, a2, a3 ， 在此n, a1, a2, a3為整數，且a1*15+ a2*20+ a3*30小於或等於N。   
   
輸出說明：
列出共找小明多少個1元，5元及50元，若帶的錢不夠買水果，則顯示”0”。


<table>
    <tr>
      <th>輸入範例:</th>
      <th>輸出範例:</th>
    </tr>
    <tr>
      <td align="center">500,1,2,3</td>
      <td align="center">0,1,7</td>
    </tr>
</table>



### 程式碼 & 說明
---
```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void split_Str(string s,string splchar,int current,vector<string>&buf) {
    int next;
    while (1) {
        next = s.find_first_of(splchar, current);
        if (next != current) {
            string tmp = s.substr(current, next - current);
            if (tmp.size() != 0) { //忽略空字串
                buf.push_back(tmp);
            }
        }
        if (next == string::npos) break;
        current = next + 1;
    }
}
int main()
{
    //a1蘋果(15) a2柳丁(20) 桃子(30)
    string input;
    vector<string> buf;
    int N = 0, a1 = 0, a2 = 0, a3 = 0,total=0;
    cin >> input;
    split_Str(input, ",", 0, buf);
    N = stoi(buf[0]); a1 = stoi(buf[1]); a2 = stoi(buf[2]); a3 = stoi(buf[3]);
    total = a1 * 15 + a2 * 20 + a3 * 30;
    if (total <= N) {
        total = N - total;
        int one = 0, five = 0, fifty = 0;
        fifty = total / 50;
        five = (total % 50) / 5;
        one = (total % 50) % 5;
        cout << one << "," << five << "," << fifty << endl;
    }
    else {
        cout << "0" << endl;
    }
    system("pause");
}
```

`#include <iostream>` 導入 iostream函式庫  
`#include <string>` 導入string函式庫   
`#include <vector>` 導入vector函式庫   
`void split_Str(string s,string splchar,int current,vector<string>&buf)` 字串分割自訂函數   
   - int next 宣告一個整數變數
   - 無限迴圈   
     - next = s.find_first_of(splchar, current); 使用 `find_first_of` 函數尋找分割字元位置 從 `current` 位置開始尋找
     - if (next != current) 判斷如果下一個位置不等於現在位置
       - string tmp = s.substr(current, next - current); 使用 `substr` 函數將分割後字串存入 `tmp` 變數
       - if (tmp.size() != 0) 忽略空字串
         - buf.push_back(tmp);將 `tmp` 存入 `buf` 
     -  if (next == string::npos) break; 如果下一個位置在最後一個字元就跳出
        current = next + 1;將現在位置設為下一個位置的下一個字元

`int main(){}` 主程式區塊    
   - string input; 宣告一個 `input` 字串變數用於儲存輸入文字
   - vector<string> buf; 宣告一個 `buf` 動態字串陣列
   - int N = 0, a1 = 0, a2 = 0, a3 = 0,total=0;   
     宣告整數變數 `N`  用於儲存給多少錢   
     宣告整數變數 `a1` 用於儲存蘋果幾顆   
     宣告整數變數 `a2` 用於儲存柳丁幾顆   
     宣告整數變數 `a3` 用於儲存桃子幾顆   
   - cin >> input; 將輸入文字讀入變數   
   - split_Str(input, ",", 0, buf); 使用自訂函數(輸入字串,分割字元,起始位置,儲存位置)
   - N = stoi(buf[0]); a1 = stoi(buf[1]); a2 = stoi(buf[2]); a3 = stoi(buf[3]); 使用 `stoi` 分別將分割後的字串轉為整數存入 `N` `a1` `a2` `a3`
   - total = a1 * 15 + a2 * 20 + a3 * 30; 計算總合
   - if (total <= N)  如果總金額小於等於給的錢 才做下面事情
       - total = N - total; 計算要找的錢
       - int one = 0, five = 0, fifty = 0; 宣告 `one` `five` `fifty` 分別儲存1,5,50
       下面為計算找零數量，並輸出
       ``` 
       fifty = total / 50;
       five = (total % 50) / 5;
       one = (total % 50) % 5;
       cout << one << "," << five << "," << fifty << endl;
       ```
   - else 購買金額大於給的錢
       - cout << "0" << endl; 輸出 `0`
    





### 結果
---
![結果](https://cdn.discordapp.com/attachments/1083434363968032828/1096784427306193057/image.png)
![ITSA](https://cdn.discordapp.com/attachments/1083434363968032828/1096784617396244601/image.png)