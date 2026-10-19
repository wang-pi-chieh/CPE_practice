#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n; // case
    int r; // relative
    int s; // street number
    cin >> n; 
    while(n--){
        vector<int> street;
        cin >> r;        
        while(r--){
            cin >> s;
            street.push_back(s);
        }
        int v = 0;
        sort(street.begin(), street.end());
        v = street[street.size()/2];
        
        int ans = 0;
        for(int i = 0; i < street.size(); i++){
            ans += abs(street[i] - v);
            
        }
        cout << ans << endl;
    }
}