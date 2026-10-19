#include <iostream>
#include <string>
using namespace std;

int main(){
	bool first = false;
	char c = ' ';
	
	while(cin.get(c)){
		if(c == '"'){
			if(first){
				cout << "\'\'";
				first = false;
			}else{
				cout << "``";
				first = true;
			}
		}else {
			cout << c;
		}
		
	}
	
}
