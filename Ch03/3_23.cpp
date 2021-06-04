#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	vector<int> vec(10, 2);
	for (auto it = vec.begin(); it != vec.end(); ++it) {
		*it *= 2;
		cout << *it;
	}
	return 0;
}