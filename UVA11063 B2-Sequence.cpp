#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
	int N = 0;
	int c = 1;
	while(cin >> N){
		cout << "Case #" << c << ": ";
		c++;
		int temp = 0;
		int num[N];
		bool ans = true;
		unordered_map<int, int> map;
		for(int i = 0; i < N; i++){
			cin >> num[i];
			if(num[0] < 1) ans = false;
			if(i > 0 && num[i] <= num[i - 1]) ans = false;
		}
		for(int i = 0; i < N; i++){
			for(int j = i; j < N; j++){
				temp = num[i] + num[j];
				if(map.count(temp)){
					ans = false;
				}else{
					map[temp] = 0;
				}
			}
		}
		
		if(ans){
			cout << "It is a B2-Sequence." << endl;
		}else{
			cout << "It is not a B2-Sequence." << endl;
		}
		cin.ignore();
	}
}
