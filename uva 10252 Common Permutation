#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	
	while (getline(cin, a) && getline(cin, b)) { //要用getline，避免在輸入時出現空格
		int counter_a[26] = { 0 };
		int counter_b[26] = { 0 };
		for (int i = 0; i < a.length(); i++) {
			counter_a[a[i] - 'a']++;
		}
		for (int i = 0; i < b.length(); i++) {
			counter_b[b[i] - 'a']++;
		}
		for (int i = 0; i < 26; i++) {
			if (counter_a[i] > 0 && counter_b[i] > 0) {
				while (counter_a[i] > 0 && counter_b[i] > 0) { //今天a和b同時重複幾次就要輸出幾次該字元
					cout << char(i + 'a'); //注意如何輸出轉為字元
					counter_a[i]--;
					counter_b[i]--;
				}
				
			}
		}
		cout << endl; //要記得換行
	}
	
}