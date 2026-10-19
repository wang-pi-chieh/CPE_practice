#include <iostream>
#include <cmath>
using namespace std;

int b[16] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 100000};


int binary(int num){
	int cnt = 0;
	string convert = "";
	
	for(int i = 14; i >= 0; i--){
		if((num >= b[i]) && (num < b[i + 1])){
			convert += "1";
			num -= b[i];
		}else{
			convert += "0";
		}
	}
	
	// cout << "convert: " << convert << endl;
	
	for(char x: convert){
		if(x == '1') cnt++;
	}
	
	return cnt;
}

int main(){
	int N = 0;
	int M = 0;
	
	cin >> N;
	while(N--){
		int b1 = 0;
		int b2 = 0;
		int i = 0;
		int temp = 0;
		cin >> M;
		// decimal
		b1 = binary(M);
		
		// hexadecimal
		while(M > 0){
			temp = temp + (M % 10) * pow(16, i);
			M /= 10;
			i++;
		}
		// cout << "temp: " << temp << endl;
		b2 = binary(temp);
		
		cout << b1 << " " << b2 << endl;
	}
}
