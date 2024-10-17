#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//先將num轉成二進位，再把每位bit相加

int main() {
	int num;
	while (cin >> num) {
		if (num == 0) {
			break;
		}
		string num_binary;
		int bit = 0;
		while (num > 0) {
			num_binary += to_string(num % 2); //對num取餘數2，再轉成字串，並存到num_binary
			bit += num % 2;
			num /= 2;
		}
		reverse(num_binary.begin(), num_binary.end());
		cout << "The parity of " << num_binary << " is " << bit << " (mod 2)." << endl;
	}
	return 0;
}










//#include <iostream>
//#include <stack>
//using namespace std;
////先將num轉成二進位，再把每位bit相加
//
//int main() {
//	int num;
//	while (cin >> num) {
//		if (num == 0) {
//			break;
//		}
//		stack<int> binary;
//		int num_binary = 0;
//		//string num_binary = { 0 };
//		bool flag = false;
//		while (num > 0) {
//			int temp = num % 2;
//			binary.push(temp);
//		}
//		while (!binary.empty()) {
//			num_binary += binary.top();
//			binary.pop();
//			if (binary.top() == 0) {
//				binary.pop();
//
//			}
//		}
//
//	}
//}