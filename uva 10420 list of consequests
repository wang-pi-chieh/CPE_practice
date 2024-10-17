#include <iostream>
#include <string>
using namespace std;
//記得bubble sort怎麼排列!!
//記得array怎麼用


int main() {
	int n;
	cin >> n;
	string country[2000];
	string name[2000];
	for (int i = 0; i < n; i++) {
		cin >> country[i];
		getline(cin, name[i]); //名字會有空格(first name & last name)
	}
	for (int i = 0; i < n; i++) { //國家按照字首順序排列
		for (int j = 0; j < n - 1 - i; j++) {
			if (country[j] > country[j + 1]) { //名字跟國家要綁在一起，一起改變位置
				string tmp = country[j];
				country[j] = country[j + 1];
				country[j + 1] = tmp;

				string temp = name[j];
				name[j] = name[j + 1];
				name[j + 1] = temp;
			}
		}
	}
	int counter = 1;
	for (int i = 0; i < n; i++) { //進行輸出，輸出每個國家有幾個人
		if (country[i] == country[i + 1]) {
			counter++;
		}
		else {
			cout << country[i] << " " << counter << endl;
			counter = 1;
		}
	}
}