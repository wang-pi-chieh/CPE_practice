//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning (disable:4996)
//
//
//
//int main() {
//	long long S = 0; //S表示第一組旅行團人數
//	long long D = 0; //D表示查詢在第D天的旅行團人數
//	scanf("%d %d", &S, &D);
//
//
//
//	while (scanf("%lld %lld", &S, &D) != EOF) {
//		long long num = S;
//
//		while (num < D) {
//			S++;
//			num = num + S;
//		}
//
//		printf("%lld\n", S);
//
//	}
//	
//	return 0;
//	system("pause");
//}


#include <iostream>
using namespace std;

//只有一組可以進飯店]
//注意變數型態，要用long long int

int main() {
	long long int S;
	long long int D;
	while (cin >> S >> D) {
		long long int count = S;
		long long int day;
		for (day = S + 1; count < D; day++) {
			count += day;
		}
		cout << day - 1 << endl;
	}
}