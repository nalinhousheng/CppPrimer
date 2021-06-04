#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string line;
	vector<string> text;
	while (getline(cin , line)) {
		text.push_back(line);
	}
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
		for (auto& c : *it) {
			c = toupper(c);
			cout << *it << endl;
		}
	}
	return 0;
}