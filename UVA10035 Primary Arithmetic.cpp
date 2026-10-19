#include <iostream>
using namespace std;

int main(){
    long long a,b;
    while(cin >> a >> b){
        int ans = 0;
        int a1 = 0;
        int b1 = 0;
        int c = 0;
        if(a == 0 && b == 0){
            break;
        }
        while(a > 0 || b > 0){
            a1 = a % 10;
            b1 = b % 10;
            a /= 10;
            b /= 10;
            if(a1 + b1 + c > 9){
                c = 1;
                ans++;
            }else{
                c = 0;
            }
        }
        
        if(ans == 0) cout << "No carry operation." << endl;
        else if(ans == 1) cout << ans << " carry operation." << endl;
        else cout << ans << " carry operations." << endl;
    }
}