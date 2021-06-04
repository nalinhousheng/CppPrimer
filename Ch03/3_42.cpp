#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	vector<int> vec = { 0,1,2,3,4,5,6,7,8,9 };
	int arr[10];
	for (int *i = begin(arr); i != end(arr); ++i) {
		*i = vec[i - begin(arr)];
	}
	for (auto val : arr) {
		cout << val << endl;
	}
	return 0;
}