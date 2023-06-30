// ITSA.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
void cardsort(vector<string>&,int);
void split2Vec(string, int, vector<string>&, string);
void card2int(vector<string>&, vector<int>&);
void intsort(vector<int>&);

int main()
{
	int n=0; //撲克牌疊數
    cin >> n;
    cin.ignore();
	for (int i = 0; i < n; i++) {
        string s;
		vector<string> cardarray;
        getline(cin, s);
        split2Vec(s, 0, cardarray, " ");
        cardsort(cardarray, n);
        for (int i = 0; i < cardarray.size(); i++) {
            cout << cardarray[i];
            if (i < cardarray.size() - 1) cout << " ";
            else cout << endl;
        }
		cardarray.clear();
	}
    return 0;
}

void card2int(vector<string>& buf,vector<int>& ibuf) {
    for (int i = 0; i < buf.size(); i++) {
        int tmp = stoi(buf[i].substr(1,buf[i].length()));
        switch (buf[i][0]) {
        case 'S': 
            ibuf.push_back(tmp + 400);
            break;
        case 'H':
            ibuf.push_back(tmp + 300);
            break;
        case 'D':
            ibuf.push_back(tmp + 200);
            break;
        case 'C':
            ibuf.push_back(tmp + 100);
            break;
        }
    }
}


//排序
void intsort(vector<int>& buf) {
    for (int i = 0; i < buf.size()-1; i++) {
        for (int j = 0; j < buf.size()-i-1; j++) {
            if (buf[j] < buf[j+1]) {
                int t;
                t = buf[j+1]; buf[j+1] = buf[j]; buf[j] = t;
            }
        }
    }
}
void cardsort(vector<string>& cardarray, int n) {
    vector<int> buf;
    card2int(cardarray, buf);
    intsort(buf);
    cardarray.clear();
    for (int i = 0; i < buf.size(); i++) {
        if (buf[i] < 500 && buf[i]>400) {
            cardarray.push_back("S" + to_string(buf[i] - 400));
        }
        else if (buf[i] < 400 && buf[i]>300) {
            cardarray.push_back("H" + to_string(buf[i] - 300));
        }
        else if (buf[i] < 300 && buf[i]>200) {
            cardarray.push_back("D" + to_string(buf[i] - 200));
        }
        else if (buf[i] < 200 && buf[i]>100) {
            cardarray.push_back("C" + to_string(buf[i] - 100));
        }
    }
}


void split2Vec(string s, int offset, vector<string>& buf, string symbol) {
    size_t next = 0;
    do {
        next = s.find_first_of(symbol, offset);
        if (offset != next) {
            string tmp = s.substr(offset, next - offset);
            buf.push_back(tmp); // 空字串不儲存  
        }
        offset = next + 1;
    } while (next != string::npos);
}
