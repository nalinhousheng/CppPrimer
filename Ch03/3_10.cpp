#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cin >> str;
	for (auto cha : str) {
		if (!ispunct(cha)) {
			cout << cha;
		}
	}
	return 0;
}