#include <iostream>
using namespace std;

int main(){
	int cnt = 0;
	int c = 1;
	cin >> cnt;
	while(cnt--){
		cout << "Case " << c << ": ";
		int a = 0;
		int b = 0;
		int sum = 0;
		cin >> a >> b;
		if(b % 2 == 0) b--;
		while(a <= b){
			if(a % 2 == 0) a++;
			sum += a;
			a += 2;
		}
		cout << sum << endl;
		c++;
	}
}
