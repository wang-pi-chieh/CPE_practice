#include <iostream>
using namespace std;

void binary(int num){
	string b = "";
	int cnt = 0;
	while(num > 0){
		if(num % 2 == 1){
			b = '1' + b;
			cnt++;
		}
		else b = '0' + b;
		num /= 2;
	}
	cout << b << " is " << cnt;
}

int main(){
	int I = 0;
	while(cin >> I){
		if(I == 0) break;
		
		cout << "The parity of ";
		
		binary(I);
		
		cout << " (mod 2)." << endl;
	}
}
