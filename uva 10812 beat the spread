//法一，WA

//#include <iostream>
//using namespace std;
//
//int main() {
//	int test;
//	cin >> test;
//	while (test--) {
//		int s, d;
//		cin >> s >> d;
//		if (s < d || s == d || (s - d) < 0) {
//			cout << "impossible" << endl;
//		}
//		else {
//			int temp = (s - d) / 2;
//			cout << temp + d << " " << temp << endl;
//		}
//	}
//
//}


//法二，AC
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		int s, d;
		cin >> s >> d;
		int x = (s + d) / 2, y = (s - d) / 2;
		//s=x+y  //d=x-y
		//s-d=2y  //s+d=2x
		//s+d=2x 必為偶數
		//s-d=2y 必大於等於零
		if (x < 0 || y < 0  || s < d || (s + d) % 2 != 0) {
			cout << "impossible" << endl;
		}
		//s=d: s=20, d=20, x=20, y=0
		else {
			cout << x << " " << y << endl;
		}
	}
}