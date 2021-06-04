#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	vector<int> vec;
	int num;
	while (cin >> num) {
		vec.push_back(num);
	}
	if (vec.size() < 2) {
		cerr << "input at least two integers." << endl;
		return -1;
	}
	/*输出每对相邻整数的和
	for (decltype(vec.size()) i = 0; i < vec.size()-1; ++i) {
		cout << vec[i] + vec[i + 1] << endl;
	}*/
	//输出第n和倒数第n的和
	for (decltype(vec.size()) i = 0, j = vec.size() - 1; j >= i; ++i,--j) {
		cout << vec[i] + vec[j] << endl;
	}
	return 0;
}