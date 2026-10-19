#include <iostream>
using namespace std;

int main(){
	int count = 0;
	int m = 0;
	int d = 0;
	int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string week[7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	int num;
	cin >> count;
	// cout << "cout:" << count << endl;
	while(count--){
		cin >> m >> d;
		num = 0;
		
		for(int i = 0; i < m - 1; i++){
			num += day[i];
		}
		num += d;
		num -= 1;
		// cout << "num: " << num << endl;
		num %= 7;
		cout << week[num] << endl;
	}
}

// 1/1 w6
