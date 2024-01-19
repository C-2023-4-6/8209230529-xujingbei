#include<iostream>
using namespace std;
int main() {
	int a, b;
	char t;
	cout << "请输入一个数" << endl;
	cin >> a;
	cout << "请输入一个运算符" << endl;
	cin >> t;
	cout << "请再输入一个数" << endl;
	cin >> b;
	int f;
	f = int(t);
	switch (f)
	{
	case 43:
		cout << a + b << endl;
		break;
	case 45:
		cout << a - b << endl;
		break;
	case 42:
		cout << a * b << endl;
		break;
	case 37:
		cout << a % b << endl;
		break;
	case 47:
		if (b == 0)
			cout << "除数不能为0" << endl;
		else
			cout << a / b << endl;
		break;
	default:
		cout << "算术符不合规" << endl;
		break;
	}
		return 0;
	}