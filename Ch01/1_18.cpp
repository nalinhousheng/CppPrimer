#include<iostream>
using namespace std;

int main() {
	//currVal是正在统计的数，将读入的新值存入val
	int currVal = 0, val = 0;
	//读取第一个数
	if (cin >> currVal) {
		int cnt = 1;//当前值的个数
		while (cin >> val) {//读取剩余的数
			if (val == currVal) {//如果相等
				++cnt;//个数加一
			}
			else {//否则打印前一个值的个数
				cout << currVal << " occurs " << cnt << " times" << endl;
				currVal = val;//读取新数
				cnt = 1;
			}
		}
		//打印最后一个值的个数
		cout << currVal << " occurs " << cnt << " times" << endl;
	}
	return 0;
}