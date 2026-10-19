#include <iostream>
#include <map>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    map<string, int> table;
    string country;
    string first;
    string last;
    while(n--){
        cin >> country >> first >> last;
        if(table.count(country)) table[country]++;
        else table[country] = 1;
    }
    for(auto x: table){
        cout << x.first << " " << x.second << endl;
    }
}