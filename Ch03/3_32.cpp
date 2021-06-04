#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int ia[10];
	for (size_t i = 0; i < 10; ++i) {
		ia[i] = i;
	}
	int ib[10];
	for (size_t i = 0; i < 10; ++i) {
		ib[i] = ia[i];
	}
	vector<int> vec(10);
	for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
		*iter = iter - vec.begin();
	}
	vector<int> vec2(vec);
	for (auto val : vec) {
		cout << val << endl;
	}
	return 0;
}