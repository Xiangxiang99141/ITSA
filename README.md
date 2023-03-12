# ITSA題目
## 題目4. 停車費計算   
問題描述：
假設某個停車場的費率是停車2小時以內，每半小時30元   
超過2小時，但未滿4小時的部份，每半小時40元    
超過4小時以上的部份，每半小時60元，未滿半小時部分不計費   
如果您從早上10點23分停到下午3點20分，請撰寫程式計算共需繳交的停車費。

輸入說明：
輸入兩組時間，分別為開始與離開時間，24小時制。   
輸出說明：
輸出停車費。  
範例：

<table>
    <tr>
      <th>輸入範例:</th>
      <th>輸出範例:</th>
    </tr>
    <tr>
      <td align="center">10 23 <br> 15 20</td>
      <td align="center">340</td>
    </tr>
</table>

### 程式碼 & 說明
---
```cpp
#include <iostream>
using namespace std;

int main()
{
    int start_h = 0, start_m = 0;
    int end_h = 0, end_m = 0;
    int time = 0;
    int cost = 0;
    cin >> start_h >> start_m;
    cin >> end_h >> end_m;
    time = (end_h * 60 + end_m) - (start_h * 60 + start_m);
    if (time >= 0 && time <= 120) {
        cost = (time / 30) * 30;
    }
    else if (time > 120 && time <= 240) {
        cost = 120 + (time - 120)/30*40;
    }
    else {
        cost = 120 + 160 + ((time - 120) - 120) / 30 * 60;
    }
    cout << cost << endl;
}

```

`#include <iostream>` 導入 iostream  
`int main(){}` 主程式區塊    
下面皆為宣告整數變數，依次為   

1. int start_h = 0, start_m = 0;
   - 宣告用於儲存進場時間(小時以及分鐘)的變數
2. int end_h = 0, end_m = 0;
   - 宣告用於儲存離場時間(小時以及分鐘)的變數
3. int time = 0;;
   - 宣告用於儲存停了多久時間的變數
4. int cost = 0;
   - 宣告用於儲存需要多少錢的變數

     
```cpp
    cin >> start_h >> start_m;
    cin >> end_h >> end_m;
```
使用cin分別將時間輸入到變數   
`time = (end_h * 60 + end_m) - (start_h * 60 + start_m);` 計算總共停了幾分鐘


```cpp
if (time >= 0 && time <= 120) {
    cost = (time / 30) * 30;
}
else if (time > 120 && time <= 240) {
    cost = 120 + (time - 120)/30*40;
}
else {
    cost = 120 + 160 + ((time - 120) - 120) / 30 * 60;
}
```
由題目以及範例所知，這個停車場計費是使用累進計費   
使用if 函數判斷這次停車時間的區間在哪裡，並使用相對應的算法  
- 2小時以內，每半小時30元   
- 超過2小時，但未滿4小時的部份，每半小時40元
- 超過4小時以上的部份，每半小時60元

$120 = 2_hr* 60min_/hr$   
$240 = 4_hr * 60min_/hr$   
除以30是因為這些價格都是半小時(30分鐘)

### 結果
---

![LOCAL TEST](https://cdn.discordapp.com/attachments/1083434363968032828/1083737584997507132/image.png)
![結果](https://cdn.discordapp.com/attachments/1083434363968032828/1083738179447832637/image.png)
