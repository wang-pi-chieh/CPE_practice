#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string first = "";
    string second = "";
    
    while(cin >> first >> second){
    	int num1[26] = {0};
        int num2[26] = {0};
        int count = 0;
        for(char x: first){
            num1[x - 'a']++;
        }
        for(char x: second){
            num2[x - 'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(num1[i] > 0 && num2[i] > 0){
                if(num1[i] > num2[i]){
                    count = num2[i];
                }else {
                    count = num1[i];
                }
                for(int j = 0; j < count; j++){
                    cout << char(i+97);
                }
            }
        }
        cout << endl;
    }
}
