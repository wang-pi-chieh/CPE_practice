#include <iostream>
using namespace std;

int main(){
	char a = ' ';
	while(cin >> a){
		if(a >= '0' && (int)a <= '9'){
			cout << (int)a - 48 + 1 << endl;
		}else if(a >= 'A' && a <= 'Z'){
			cout << (int)a - 55 + 1 << endl;
		}else if(a >= 'a' && (int)a <= 'z'){
			cout << (int)a - 60 + 1 << endl;
		}else{
			cout << "such number is impossible!" << endl;
		}
	}
}
