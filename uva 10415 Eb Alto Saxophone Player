#include <iostream>
#include <string>
using namespace std;
//要用getline和cin.ignore
//注意題目語意


int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string note;
		getline(cin, note);
		string current = "00000000000";
		string next;
		int counter[11] = { 0 };
		for (int i = 0; i < note.length(); i++) {
			next = "00000000000";
			switch(note[i]) {
			case 'c':
				next[2]++;
				next[3]++;
				next[4]++;
				next[7]++;
				next[8]++;
				next[9]++;
				next[10]++;
				break;
			case 'd':
				next[2]++;
				next[3]++;
				next[4]++;
				next[7]++;
				next[8]++;
				next[9]++;
				break;
			case 'e':
				next[2]++;
				next[3]++;
				next[4]++;
				next[7]++;
				next[8]++;
				break;
			case 'f':
				next[2]++;
				next[3]++;
				next[4]++;
				next[7]++;
				break;
			case 'g':
				next[2]++;
				next[3]++;
				next[4]++;
				break;
			case 'a':
				next[2]++;
				next[3]++;
				break;
			case 'b':
				next[2]++;
				break;
			case 'C':
				next[3]++;
				break;
			case 'D':
				next[1]++;
				next[2]++;
				next[3]++;
				next[4]++;
				next[7]++;
				next[8]++;
				next[9]++;
				break;
			case 'E':
				next[1]++;
				next[2]++;
				next[3]++;
				next[4]++;
				next[7]++;
				next[8]++;
				break;
			case 'F':
				next[1]++;
				next[2]++;
				next[3]++;
				next[4]++;
				next[7]++;
				break;
			case 'G':
				next[1]++;
				next[2]++;
				next[3]++;
				next[4]++;
				break;
			case 'A':
				next[1]++;
				next[2]++;
				next[3]++;
				break;
			case 'B':
				next[1]++;
				next[2]++;
				break;
			}
			for (int j = 1; j < 11; j++) {
				if (current[j] < next[j]) {
					counter[j]++;
				}
			}
			current = next;
		}
		cout << counter[1];
		for (int i = 2; i < 11; i++) {
			cout << " " << counter[i];
		}
		cout << endl;
		
	}

}