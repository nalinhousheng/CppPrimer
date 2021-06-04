#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	vector<string> vec;
	string word;
	while (cin >> word) {
		vec.push_back(word);
	}
	for (auto& str : vec) {
		for (auto &c : str) {
			c = toupper(c);
		}
	}
	for (auto& str : vec) {
		cout << str << endl;
	}
	return 0;
}