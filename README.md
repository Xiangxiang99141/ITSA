# ITSA題目
## 題目6. 季節判定   
問題描述：
試撰寫一程式，可輸入月份，然後判斷其所屬的季節（ 3~5 月為春季，6~8 月為夏季， 9~11 月為秋季， 12~2 月為冬季）。

輸入說明：
輸入月份。   
輸出說明：
輸出該月份的季節， 3~5 月為春季(Spring)， 6~8 月為夏季(Summer)， 9~11 月為秋季(Autumn)， 12~2 月為冬季(Winter)。  
範例：

<table>
    <tr>
      <th>輸入範例:</th>
      <th>輸出範例:</th>
    </tr>
    <tr>
      <td align="center">3</td>
      <td align="center">Spring</td>
    </tr>
    <tr>
      <td align="center">10</td>
      <td align="center">Autumn</td>
    </tr>
</table>

### 程式碼 & 說明
---
```cpp
#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    cin >> a;
    switch (a) {
    case 12:
    case 1:
    case 2:
        cout << "Winter\n";
        break;
    case 3:
    case 4:
    case 5:
        cout << "Spring\n";
        break;
    case 6:
    case 7:
    case 8:
        cout << "Summer\n";
        break;
    case 9:
    case 10:
    case 11:
        cout << "Autumn\n";
        break;
    }

    system("pause");
}
```

`#include <iostream>` 導入 iostream  
`int main(){}` 主程式區塊     

int a = 0;
   - 宣告用於儲存輸入月份的整數變數

使用**cin**將值輸入至變數a  
使用**switch case** 判別數值，並輸出相對應的季節

### 結果
---

![LOCAL TEST](https://cdn.discordapp.com/attachments/1083434363968032828/1084500201877803129/image.png)
![LOCAL TEST](https://cdn.discordapp.com/attachments/1083434363968032828/1084500340914794557/image.png)
![結果](https://cdn.discordapp.com/attachments/1083434363968032828/1084500560302063688/image.png)
