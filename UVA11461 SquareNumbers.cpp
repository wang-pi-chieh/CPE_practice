#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a = 0;
	double b = 0;
	
	while(cin >> a >> b){
		int cnt = 0;
		if((a == 0) && (b == 0)) break;
		a = sqrt(a);
		b = sqrt(b);
		// cout << "a: " << a << endl;
		// cout << "b: " << b << endl;
		if(a != (int)a){
			a = (int)a + 1;
		}
		if(b != (int)b){
			b = (int)b;
		}
		// cout << "a': " << a << endl;
		// cout << "b': " << b << endl;
		cnt = b - a + 1;
		cout << cnt << endl;
		
	}
}
