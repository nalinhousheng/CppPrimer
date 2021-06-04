#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int ia[10];
	for (int i = 0; i < 10; ++i) {
		ia[i] = i;
	}
	for (auto val : ia) {
		cout << val << endl;
	}
	return 0;
}