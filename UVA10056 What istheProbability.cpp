#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	int count = 0;
	cin >> count;
	while(count--){
		int n = 0;
		double p = 0.0;
		int ii = 0;
		cin >> n >> p >> ii;
		// cout << "n, p, ii: " << n << " " << p << " " << ii << endl;
		
		double r = 0;
		double ans = 0;
		double a = 0;
		a = p * pow((1 - p), ii - 1);
		r = pow((1 - p), n);
		ans = a / (1 - r);
		// cout << "r, ans, a: " << r << " " << ans << " " << a << endl;
		cout << fixed << setprecision(4) << ans << endl;
		
		
	}
}
