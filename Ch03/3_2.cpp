#include<iostream>
#include<string>
using namespace std;

int main() {
	/*һ�ζ���һ����
	string line;
	while (getline(cin, line)) {
		cout << line << endl;
	}*/

	//һ�ζ���һ����
	string word;
	while (cin >> word) {
		cout << word << endl;
	}
	return 0;
}