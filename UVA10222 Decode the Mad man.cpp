#include <iostream>
#include <string>
using namespace std;

int main(){
    string sentence ="";
    string ans = "";
    getline(cin, sentence);
    char line[13][4] = {{'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', ''}, 
                        {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']', '\\'},
                        {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '''', '', ''},
                        {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/', '', '', ''}
    };

    // char line1[12] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '='};
    // char line2[13] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']', '\\'};
    // char line3[11] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', ''''};
    // char line4[10] = {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};

    for(auto x: line){
        
    }

}
