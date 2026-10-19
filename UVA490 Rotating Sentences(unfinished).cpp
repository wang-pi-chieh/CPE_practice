#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "";
    string sentence[100];
    int line = 0;
    int len = 0;

    while(getline(cin, s)){
        sentence[line] = s;
        
        if(len < s.length()){
            len = s.length();
        }

        line++;
    }
    
	cout << "123"<<endl;
	for(int i = 0; i < line; i++){
	    cout << sentence[i] << endl;
	}
	
	
	for(int i = 0; i < len; i++){
		for(int j = line; j >= 0 ; j--){
			if(i < sentence[j].length()){
	            cout << sentence[j][i];
	        }else {
	            cout << ' ';
	        }	
		}
		cout << endl;
    }
}
