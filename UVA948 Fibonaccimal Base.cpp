#include <iostream>
#include <string>
using namespace std;

int main(){
	int N = 0;
	int num = 0;
	int max = 0;

	int f[100];
	f[0] = 0;
	f[1] = 1;
	
	cin >> N;
	
	// Fibonaccimal
	for(int i = 2; i < 100; i++){
		f[i] = f[i - 1] + f[i - 2];
		if(f[i] > 100000000){
			max = i - 1;
			break;
		}
	}
		
	while(N--){
		cin >> num;
		cout << num << " = ";
		
		int pos = 0;
		string ans = "";
		bool con = false;
		
		for(int i = max; i >= 2; i--){
			if(con){
				con = false;
				ans += "0";
				continue;
			}
			if((num >= f[i]) && (num < f[i + 1])){
				num -= f[i];
				ans += "1";
				con = true;
			}else{
				ans += "0";
			}
		}
		pos = ans.find_first_not_of('0');
		ans = ans.substr(pos);
		cout << ans;
		
		cout << " (fib)" << endl;
	}
}
