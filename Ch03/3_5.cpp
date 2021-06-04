#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	string largeStr;
	while (cin >> str) {
		/*连接多个字符串
		largeStr+=str;
		*/
		//分隔多个字符串
		if (largeStr.empty()) largeStr += str;
		else largeStr += ' ' + str;
	}
	cout << largeStr << endl;
	return 0;
}