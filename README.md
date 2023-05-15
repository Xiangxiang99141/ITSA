# ITSA題目

## 題目19. 最少派車數
問題描述：
某遊覽車派遣公司共收到n筆任務訂單，訂單中詳細記載發車時間s和返回時間d。每一輛遊覽車只要任務時間不衝突，可立即更換司機繼續上路執行任務。請問該公司至少需要調遣多少車輛才足以應付需求？
   
輸入說明：
程式的輸入包含兩行數字，第一行包含一個正整數n，1 ≤ n ≤ 30，代表第二行有n筆訂單的出發時間和返回時間s1, d1, s2, d2, ..., sn, dn，0 < si < di ≤ 24，而此2n個正整數間以空格隔開。
   
輸出說明：
輸出最少車輛需求數。

<table>
    <tr>
      <th>輸入範例:</th>
      <th>輸出範例:</th>
    </tr>
    <tr>
      <td>3 <br/>1 6 3 12 6 18</td>
      <td align="center">2</td>
    </tr>
</table>



### 程式碼 & 說明
---
```cpp
#include <iostream>
using namespace std;
int main()
{
    int n = 0, t[24] = { 0 },max_car; //n筆訂單 t[24小時]
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a = 0, b = 0;
        cin >> a >> b;
        for (int j = a - 1; j < b - 1; j++) {
            t[j]++;
        }
    }
    max_car = t[0];
    for (int i = 0; i < 24; i++) {
        if (max_car < t[i]) max_car = t[i];
    }
    cout << max_car << endl;
    return 0;
}
```


`#include <iostream>` 導入 iostream  
`int main(){}` 主程式區塊     
`int n = 0, t[24] = { 0 },max_car` 分別宣告 `n` 用來有幾筆訂單 、 `t`用來儲存遊覽車的時段並將初始值設為0 、 `max_car` 用來儲存需要多少車
```cpp
   for (int i = 0; i < n; i++) {
        int a = 0, b = 0;
        cin >> a >> b;
        for (int j = a - 1; j < b - 1; j++) {
            t[j]++;
        }
    }
```
使用 `for` 迴圈 讀入訂單，並使用 `for` 迴圈將遊覽車出班時間在 `t`陣列中加一

```cpp
   for (int i = 0; i < 24; i++) {
        if (max_car < t[i]) max_car = t[i];
    }
```
找出對多的遊覽車班次

### 撰寫邏輯
將公車時間逐一記錄起來，並找出最多需要的遊覽車



### 結果
---
![結果](https://cdn.discordapp.com/attachments/1083434363968032828/1107498412636651531/image.png)
![ITSA](https://cdn.discordapp.com/attachments/1083434363968032828/1107498543914156102/image.png)