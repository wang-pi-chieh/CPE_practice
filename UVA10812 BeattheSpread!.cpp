#include <iostream>
using namespace std;

int main(){
	int n = 0;
	cin >> n;
	while(n--){
		int s = 0;
		int d = 0;
		int a = 0;
		int b = 0;
		cin >> s >> d;
		if((s < d) || ((s % 2 == 0) && (d % 2 != 0)) || ((s % 2 != 0) && (d % 2 == 0))){
			cout << "impossible" << endl;
			continue;
		}
		a = (s + d) / 2;
		b = s - a;
		if(a > b) cout << a << " " << b << endl;
		else cout << b << " " << a << endl;
	}
}
