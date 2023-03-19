# ITSA題目

## 題目7.複數運算
問題描述：
在做傅立葉轉換時，常會用到複數，但每次都要分開來計算實部與虛部，非常的麻煩，現在透過operator overloading的方式來簡化程式設計師的負擔。須做加減乘。
   
輸入說明：
第一列輸入一個正整數n。其後有n列，每一列代表一個想要做運算的虛數，每一列之資料依序為運算元、虛數1、虛數2。虛數的格式為a b。
   
輸出說明：每一列表一個運算結果。虛數的格式為a b。
   

<table>
    <tr>
      <th>輸入範例:</th>
      <th>輸出範例:</th>
    </tr>
    <tr>
      <td>
        3<br/>
        - 1 2 2 -3<br/>
        + 2 1 1 2<br/>
        * 1 1 1 1
      </td>
      <td align="center">
        <br/>
        -1 5<br/>
        3 3<br/>
        0 2
      </td>
    </tr>
</table>



### 程式碼 & 說明
---
```cpp
#include <iostream>
#include <math.h>
using namespace std;

class Complex {
private:
    int real, imaginary;
public:
    //建構子
    Complex(int r = 0, int i = 0) {
        real = r;
        imaginary = i;
    }

    //重新定義運算子
    Complex operator + (Complex const& obj) {
        Complex result;
        result.real = real + obj.real;
        result.imaginary = imaginary + obj.imaginary;
        return result;
    }
    Complex operator - (Complex const& obj) {
        Complex result;
        result.real = real - obj.real;
        result.imaginary = imaginary - obj.imaginary;
        return result;
    }
    Complex operator * (Complex const& obj) {
        Complex result;
        result.real = (real * obj.real)-(imaginary*obj.imaginary);
        result.imaginary = (imaginary * obj.real) + (real*obj.imaginary);
        return result;
    }
    Complex operator / (Complex const& obj) {
        Complex result;
        result.real = ((real * obj.real) + (imaginary * obj.imaginary)) / (pow(obj.real,2) + pow(obj.imaginary,2));
        result.imaginary = ((imaginary * obj.real) - (real * obj.imaginary))/ (pow(obj.real, 2) + pow(obj.imaginary, 2));
        return result;
    }

    void print() {
        cout << real << " " << imaginary << endl;
    }

};

int main()
{
    int n = 0;
    while (cin >> n) {
        Complex c[20];
        for(int i=0;i<n;i++)
        {
            char opr;
            int ar, ai, br, bi;
            cin >> opr >> ar >> ai >> br >> bi;
            Complex a(ar, ai);
            Complex b(br, bi);
            switch (opr) {
            case '+':
                c[i] = a + b;
                break;
            case '-':
                c[i] = a - b;
                break;
            case '*':
                c[i] = a * b;
                break;
            case '/':
                c[i] = a / b;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            c[i].print();
        }
    }
}
```
   
`#include <iostream>` 導入 iostream  
`#include <math.h>` 導入 math.h   
class Complex \{}
   - 宣告一個 `Complex` 的類別
   - private 
     - 只有class自己看的到的
     - 宣告 `real` `imaginary` 兩個整數變數
   - public 
     - 在main() 也可以看到的
     - 宣告一個 `complex(int r=0,int i=0)` 的建構子
       - real = r  將 `real` 的值指定為 `r` 如無輸入值，則預設為0
       - real = r  將 `imaginary` 的值指定為 `i` 如無輸入值，則預設為0
     - 底下為重新定義運算子，因為 `complex` 類別裡面並沒有 `+` `-` `*` `/`的運算，所以要把它重新定義
     - `Complex operator + (Complex const& obj)` 定義 `+` 號運算子
       - Complex result;  定義一個變數
       - result.real = real + obj.real; 指定結果的實數= `a1+b1`， `-` 則為 `a1-b1`
       - result.imaginary = imaginary + obj.imaginary; 指定結果的虛數= `a2+b2` ， `-` 則為 `a2-b2`
       - return result; 將結果回傳
     - `Complex operator * (Complex const& obj)` 定義 `*` 號運算子
       - Complex result;  定義一個變數
       - result.real = (real * obj.real)-(imaginary*obj.imaginary);  
         result.imaginary = (imaginary * obj.real) + (real*obj.imaginary);   
        由複數乘法運算 實數=(a1b1-a2b2) 虛數=a2b1+a1b2 得知
       - return result; 將結果回傳
     - `Complex operator / (Complex const& obj)` 定義 `/` 號運算子
       - Complex result;  定義一個變數
       - result.real = ((real * obj.real) + (imaginary * obj.imaginary)) / (pow(obj.real,2) + pow(obj.imaginary,2));   
          result.imaginary = ((imaginary * obj.real) - (real * obj.imaginary))/ (pow(obj.real, 2) + pow(obj.imaginary, 2));   
         由複數除法運算得知(註1)
       - return result; 將結果回傳

註1:   
實數= $\frac{(a1b1+a2b2)}{b1^2+b2^2}$   
虛數=$\frac{(a2b1-a1b2)}{b1^2+b2^2}$




`int main(){}` 主程式區塊     
- int n=0 宣告一個整數n的陣列用來儲存有幾列
- 使用 `while` 迴圈一直將數值輸入 `n`
  - Complex c[20]; 宣告一個 `Complex` 類別的陣列 `c`
  - for(int i=0;i<n;i++) 使用 `for` 迴圈執行 `n` 次計算
    - char opr 宣告一個 `opr` 的字元變數用來儲存運算元
    - int ar, ai, br, bi; 宣告用來儲存虛數的變數   
      `ar` 虛數1的實數部分  `ai` 虛數1的虛數部分   
      `br` 虛數2的實數部分  `bi` 虛數2的虛數部分
    - cin >> opr >> ar >> ai >> br >> bi; 將運算元及數值輸入至變數
    - Complex a(ar, ai);   
      Complex b(br, bi);  宣告 `Complex` 類別的 `a,b` 變數，並將 `ar,ai` `br,bi` 分別傳入
    - switch (opr) 使用 `switch case` 判斷運算元是是什麼，並作相對應的運算後存入陣列 `c`
    - ```cpp
      for (int i = 0; i < n; i++) {
          c[i].print();
      }
       ```
       使用for迴圈逐次印出結果


### 結果
---
![結果](https://media.discordapp.net/attachments/1083434363968032828/1086248936953614386/image.png)
![ITSA](https://cdn.discordapp.com/attachments/1083434363968032828/1086248936722923530/image.png)