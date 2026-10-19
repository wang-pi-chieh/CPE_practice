//法一，WA
#include <iostream>
#include <math.h>
using namespace std;
//找在第I個人的時候獲勝的機率
//數學問題
//p:獲勝機率，q:輸機率，每次遊戲共有R個回合，有n個仁參加遊戲，第k個人獲勝
//算次方:pow

int main() {
	int S;
	cin >> S;
	while (S--) {
		int N, I;
		double p;
		cin >> N >> p >> I;
		double q = 1 - p;
		cout << pow(p, I - 1) * p << endl;
	}
}

//法二，AC
//#include <iostream>
//#include <math.h>
//using namespace std;
////找在第I個人的時候獲勝的機率
////數學問題
////p:獲勝機率，q:輸機率，每次遊戲共有R個回合，有n個人參加遊戲，第k個人獲勝
////算次方:pow
//
//int main() {
//	int S;
//	cin >> S;
//	while (S--) {
//		int N, I;
//		double p, a, r;
//		cin >> N >> p >> I;
//		double q = 1 - p;
//		a = pow(q, I - 1) * p;
//		r = pow(q, N);
//		//cout << pow(p, I - 1) * p << endl;
//		if (p == 0) {
//			cout << "0.0000" << endl;
//		}
//		else {
//			cout.precision(4);
//			cout << fixed << (a * (1 - pow(r, 100000)) / (1 - r)) << endl;
//		}
//
//	}
//}