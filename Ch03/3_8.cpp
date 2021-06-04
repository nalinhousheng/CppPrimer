#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int i = 0;
	while (i < str.size()) {
		str[i] = 'x';
		++i;
	}
	/*
	for (int i = 0; i < str.size(); ++i) {
		str[i] = 'x';
	}*/
	cout << str << endl;
	return 0;
}