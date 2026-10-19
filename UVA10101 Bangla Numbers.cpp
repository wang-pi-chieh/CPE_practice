#include <iostream>
using namespace std;

int main(){
    long long n;
    int i = 1;
    while(cin >> n){
        cout << i++ << ". ";
        int temp1 = n;
        int temp
        int cnt = 0;
        bool flag;
        if(temp / 1000000000 > 0) {
            flag = true;
        }
        else flag = true;
        while(cnt){
            cout << "cnt: " << cnt << endl;
            if(temp / 10000000 > 0){
                cout << temp / 10000000 << " kuti ";
                temp %= 10000000;
                //cout << "a" << endl;
            }
            if(temp / 100000 > 0){
                cout << temp / 100000 << " lakh ";
                temp %= 100000;
                //cout << "b" << endl;
            }
            if(temp / 1000 > 0){
                cout << temp / 1000 << " hajar ";
                temp %= 1000;
                //cout << "c" << endl;
            }
            if(temp / 100 > 0){
                cout << temp / 100 << " shata ";
                temp %= 100;
                //cout << "d" << endl;
            }
            cnt--;
        }
        cout << temp << endl;
        
    }
}