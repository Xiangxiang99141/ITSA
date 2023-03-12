# ITSA題目
## 題目3. 判斷座標是否在圓形的範圍內   
問題描述：
有一圓形，直徑為200，且中心座標為(0,0)。   
請寫一支程式可以輸入「點」的座標，並判斷「點」是否在圓形的範圍內。   
如果「點」的位置剛好在邊界的話也算是在圓形範圍內(例：x=100，y=0)。  
   
![範例圖](https://cdn.discordapp.com/attachments/1083434363968032828/1083588224875778098/picture_circle.jpg)

輸入說明：輸入一整數座標，依序分別X與Y。     
輸出說明：
輸出此座標位置在圓內或圓外訊息。  
範例：

| 輸入範例 | 輸出範例 |
|:-------:|:-------:|
|  50 50  |  inside  | 
| 200 200 |  outside | 

### 程式碼 & 說明
---
```cpp
#include <iostream>
#include <math.h>
#define R 200
using namespace std;

int main()
{
    int x = 0, y = 0;
    while (cin >> x >> y) {
        if ((pow(x, 2) + pow(y, 2) < pow(R / 2, 2))) {
            cout << "inside\n";
        }
        else {
            cout << "outside\n";
        }
    }
}

```

`#include <iostream>` 導入 iostream  
`#include <math.h>` 導入 math.h 函式庫 因為下面是使用到的pow函數是包含在math.h中    
`#define R 200` 宣告一個R常數表示直徑，並將質指定為200(由題目所知)
`int main(){}` 主程式區塊    
`int x=0,y=0` 宣告兩個整數並設定初始值為0，用於儲存輸入的的座標   
`while(cin >> x >> y){}` 使用while迴圈持續輸入座標

由下圖可以知道，可以使用畢氏定理判斷座標是否在圓内  
如果:斜邊大於半徑，則表示這個座標在圓外    
   
由 $a^2 + b^2 = c^2 \quad 以及 \quad 半徑 = \frac{直徑}{2}$   
   
所以寫出 `if((pow(x, 2) + pow(y, 2) < pow(R / 2, 2))` 判斷式   
如果判斷式成立 則 印出 `inside`   否則 印出 `outside`   
 

![示例圖](https://cdn.discordapp.com/attachments/1083434363968032828/1083599970181066772/03_.png)


### 結果
---

![LOCAL TEST](https://cdn.discordapp.com/attachments/1083434363968032828/1083605833901936710/image.png)
![結果](https://cdn.discordapp.com/attachments/1083434363968032828/1083606152253800458/image.png)
