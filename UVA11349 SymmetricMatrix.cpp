#include <iostream>
using namespace std;

int main(){
	int T = 0;
	int cnt = 1;
	char temp = ' ';
	cin >> T;
	while(T--){
		cout << "Test #" << cnt << ": ";
		cnt++;
		int n = 0;
		cin >> temp;
		// cout << "temp: " << temp <<endl;
		cin >> temp;
		// cout << "temp: " << temp <<endl;
		cin >> n;
		// cout << "n: " << n <<endl;
		long long m[n][n] = {0};
		bool negative = false;
		bool nonsymmetric = false;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> m[i][j];
				if(m[i][j] < 0){
					negative = true;
				}
			}
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(m[i][j] != m[n - i - 1][n - j - 1]){
					// cout << "got it" << endl;
					nonsymmetric = true;
					break;
				}
			}
			if(nonsymmetric) break;
		}
		if(nonsymmetric || negative) cout << "Non-symmetric." << endl;
		else cout << "Symmetric." << endl;
		
	}
}
