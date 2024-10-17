#include <iostream>
#include <string>
using namespace std;
//注意:9-degree的計算方式
//1.計算數字的位數和（sum of digits），即將數字的每一位相加。
//2.如果這個位數和是 9 的倍數，則增加 9-degree，並重複步驟 1，直到位數和變成 9。
//3.最終的 9-degree 是該數字能夠轉換為 9 的次數。

int sum_of_digits(int counter) {
	int sum = 0;
	while (counter > 0) {
		sum += counter % 10;
		counter /= 10;
	}
	return sum;
}

int main() {
	string number;
	while (cin >> number) {
		long long int counter = 0;
		int degree = 1;
		if (number == "0") {
			break;
		}
		for (int i = 0; i < number.length(); i++) {
			counter += number[i] - '0';
		}
		//cout << counter << "A" << endl;
		if (counter % 9 == 0) {
			cout << number << " is a multiple of 9 and has 9-degree ";
			while (counter != 9) {
				counter = sum_of_digits(counter);
				degree++;
			}
			cout << degree << "." << endl;
		}
		else {
			cout << number << " is not a multiple of 9." << endl;
		}
		
	}


}