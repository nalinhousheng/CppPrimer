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
	/*���ÿ�����������ĺ�
	for (auto it = vec.begin(); it < vec.end() - 1; ++it) {
		cout << *it + *(it + 1) << endl;
	}*/
	//�����n�͵�����n�ĺ�
	for (auto it1 = vec.begin(), it2 = vec.end() - 1; it2 >= it1; ++it1,--it2) {
		cout << *it1 + *it2 << endl;
	}
	return 0;
}