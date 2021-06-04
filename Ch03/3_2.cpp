#include<iostream>
#include<string>
using namespace std;

int main() {
	/*一次读入一整行
	string line;
	while (getline(cin, line)) {
		cout << line << endl;
	}*/

	//一次读入一个词
	string word;
	while (cin >> word) {
		cout << word << endl;
	}
	return 0;
}