#include <iostream>
#include <cstring>
using namespace std;
//gadget小工具
//輸入S1和S2，問能否找出對兩字串皆合理的
//所有輸入皆為合法字串:開頭不為0、至少兩位元
//什麼是合法的L: 重複 S - L (二進位減法) 直到 S = L
//檢查有沒有一數字同時對兩字串S1、S2都合法，代表L要同時為兩者的公因數，所以用GCD檢查兩者是否互值(GCD=1)
//解題重點: 判斷S是不是L的倍數
//將字串從二進位轉成十進位，再用GCD檢查是否互值

//二進位轉成十進位--快速版
//#include <string>
//string binarystr = "1011";
//int decimalstr=stoi(binarystr, nullptr, 2); //基數為2 //stoi(字符串,起始位置,n進位) 
// //起始位置的默認值為nullptr(如果不關心解析結束位置，可以直接傳遞nullptr)

int GCD(int a, int b) {
	return b == 0 ? a : GCD(b, a % b);
}

int str_to_int(char* a, char* b) {
	int num1 = 0, num2 = 0;
	int i;
	for (i = 0; i < strlen(a); i++) {
		num1 = (num1 << 1) + (a[i] - '0');
		//num1 << 1為左移位運算符
		//a[i] - '0'的原因為將字符變成整數值(a[i]為字符)
	}
	for (i = 0; i < strlen(b); i++) {
		num2 = (num2 << 1) + (b[i] - '0');
	}
	return GCD(num1, num2);
}

int main() {
	int N;
	cin >> N;
	int p = 1;
	while (N--) {
		char S1[31] = { 0 };
		char S2[31] = { 0 };
		cin >> S1 >> S2;
		//改成變數型態: char
		//bool flag = false;
		/*if (S1[0] == 0) {
			flag = true;
		}*/

		/*cout << "Pair #" << p << ": ";
		p++;
		if (flag) {
			if (S1 == S2) {
				cout << "All you need is love!" << endl;
			}
			else {
				cout << "Love is not all you need!" << endl;
			}

		}*/
		
		if (str_to_int(S1, S2) != 1) {
			cout << "Pair #" << p << ": " << "All you need is love!" << endl;
		}else {
			cout << "Pair #" << p << ": " << "Love is not all you need!" << endl;
		}
		p++;
	}
	p = 1;
}