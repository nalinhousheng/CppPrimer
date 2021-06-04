#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	vector<int> vec(begin(arr), end(arr));
	for (auto val : vec) {
		cout << val << endl;
	}
	return 0;
}