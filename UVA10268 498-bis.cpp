#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <sstream>
using namespace std;

int main(){
	int x = 0;
	while(cin >> x){
		string s = "";
		int num = 0;
		int ans = 0;
		int n = 0;
		
		cin.ignore();
		getline(cin, s);
		stringstream ss(s);
		vector<int> list;
		while(ss >> num){
			list.push_back(num);
		}
		n = list.size() - 1;
		
		for(int i = 0; i < list.size() - 1; i++){
			ans += (list[i] * n * pow(x, n - 1));
			n--;
		}
		cout << ans << endl;
		
	}
	
}
