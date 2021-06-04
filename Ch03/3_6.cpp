#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;
	for (auto &cha : str) {
		cha = 'x';
	}
	cout << str << endl;
	return 0;
}