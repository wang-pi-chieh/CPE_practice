#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int count = 0;
	
	while(cin >> count){
		int num[count];
		int ans = 0;
		int sum = 0;
		for(int i = 0; i < count; i++){
			cin >> num[i];
		}
		ans = count * (count - 1) / 2;
		
		for(int i = 0; i < count - 1; i++){
			sum += abs(num[i] - num[i+1]);
			if(abs(num[i] - num[i+1]) > count) break;
			
		}
		if(sum != ans){
			cout << "Not jolly" << endl;
		}else {
			cout << "Jolly" << endl;
		}
	}
	
}
