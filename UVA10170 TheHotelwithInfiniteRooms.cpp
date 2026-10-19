#include <iostream>
using namespace std;

int main(){
	long s = 0;
	long d = 0;
	
	long ans = 0;
	long num = 0;
	
	while(cin >> s >> d){
		num = s;
		ans = s;
		while(d > num){
			ans++;
			num += ans;
			
		}
		cout << ans << endl;
	}
	
}
