#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<char, int> a, pair<char, int> b){ // a 應不應該排在 b 前面？
	if(a.second == b.second){
		return a.first < b.first;
	}else{
		return a.second > b.second;
	}
}

int main(){
    int num = 0;
    string line = "";
    char w = ' ';
    map<char, int> table;

    cin >> num;
    cin.ignore();

    while(num--){
    	getline(cin, line);
    	
    	for(auto x: line){
    		if((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')){
    			x = toupper(x);
                table[x]++;
    		}
    	}
    }
    vector<pair<char, int>> v(table.begin(), table.end());
    sort(v.begin(), v.end(), compare);
    
    for(auto x: v){
    	cout << x.first << " " << x.second << endl;
    }   
}
