#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//ascii code: 48 = '0'

int main() {
	string  number;
	while (cin >> number) {
		long long int counter_odd = 0;
		long long int counter_even = 0;
		if (number == "0") {
			break;
		}
		for (int i = 0; i < number.length(); i += 2) { //奇數
			counter_odd += int(number[i]) - 48;
		}
		//cout << counter_odd << " A" << endl;
		for (int i = 1; i < number.length(); i += 2) { //偶數
			counter_even += number[i] - 48;	
		}
		//cout << counter_even << " B" << endl;
		long long int temp = counter_odd - counter_even;
		if (llabs(temp) % 11 == 0) {
			cout << number << " is a multiple of 11." << endl;
		}
		else {
			cout << number << " is not a multiple of 11." << endl;
		}
		/*if (number % 11 == 0) {
			cout << number << " is a multiple of 11." << endl;
		}
		else {
			cout << number << " is not a multiple of 11." << endl;
		}*/
	}

}