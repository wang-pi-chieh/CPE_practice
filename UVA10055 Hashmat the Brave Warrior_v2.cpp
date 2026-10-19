#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long int me;
    long long int oppo;
    while(cin >> me >> oppo){
        cout << abs(me - oppo) << endl;
    }
}