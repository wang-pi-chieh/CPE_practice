#include <iostream>
#include <math.h>
using namespace std;
//反轉之後不能為同一個數字
//注意2,3,5,7,11這幾個數反轉狀況特殊

int main() {
	int  N;
	bool flag;
	int reverse;
	int temp;
	int copy;
	while (cin >> N) {
		flag = false;
		reverse = 0;
		copy = N;
		if (N == 2 || N == 3 || N == 5 || N == 7 || N == 11) {
			cout << N << " is prime." << endl;
			continue;
		}
		for (int i = 2; i <= sqrt(N); i++) {
			if (N % i == 0) {
				flag = true;
				break;
			}
		}
		if (flag) {
			cout << N << " is not prime." << endl;
			flag = false;
			continue;
		}
		while (copy > 0) {
			reverse *= 10;
			reverse += copy % 10;
			copy /= 10;
		}
		for (int i = 2; i <= sqrt(reverse); i++) {
			if (reverse % i == 0) {
				flag = true;
				break;
			}
		}
		if (N == reverse) {
			cout << N << " is prime." << endl;
			continue;
		}
		if (flag) {
			cout << N << " is prime." << endl;
		}
		else {
			cout << N << " is emirp." << endl;
		}
	}
}