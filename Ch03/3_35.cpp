#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int ia[10];
	for (size_t i = 0; i < 10; ++i) {
		ia[i] = i;
	}
	int* p = begin(ia), *q = end(ia);
	for (int *i = p; i != q; ++i) {
		*i = 0;
	}
	for (auto val : ia) {
		cout << val << endl;
	}
	return 0;
}