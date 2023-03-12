# ITSA題目
## 題目2. 英哩轉公里

問題描述：
試撰寫一程式，可由鍵盤輸入英哩，程式的輸出為公里  
其轉換公式如下：1 英哩= 1.6 公里  
輸入說明：輸入欲轉換之英哩數(int)。  
輸出說明：
輸出公里(double)，取到小數點以下第一位。  
範例：

| 輸入範例 | 輸出範例 |
|:-------:|:-------:|
|   90    |  144.0  | 
|   95    |  152.0  | 

### 程式碼 & 說明
---
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int ml;
	double km;
	cin >> ml;
	km = double(ml * 1.6);
	cout << fixed << setprecision(1) << km << endl;
}

```

`#include <iostream>` 導入 iostream  
`#include <iomanip>` 導入 iomanip  
`int main(){}` 主程式區塊    
`int ml` 宣告整數用於儲存輸入的英里數   
`double km` 宣告double用於儲存轉換後的公里數(題目要求)   
依照公式 1英里 = 1.6公里  
所以寫出 `km = double(1.6*ml)`   
`setprecision(1)` 用於指定只顯示至小數點後第一位


### 結果
---

![LOCAL TEST](https://cdn.discordapp.com/attachments/1083434363968032828/1083445196844441732/image.png)
![結果](https://cdn.discordapp.com/attachments/1083434363968032828/1083445506551848970/image.png)
