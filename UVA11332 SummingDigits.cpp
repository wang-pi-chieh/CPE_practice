#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void f(int num){
    int n = 0;
    while(num >= 10){
        n += (num % 10);
        num /= 10;
    }
    n +=num;
    if(n >= 10){
        f(n);
    }else{
        cout << n << endl;
    }
}

int main(){
    int num = 0;
    while(cin >> num){
        if(num == 0) break;
        f(num);
    }

}
