#include <iomanip>
#include<iostream>
using namespace std;
int main() {
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int type（八进制）:"<<oct<<testUnint<<endl;
	cout << "output in char type : !" << static_cast<char>(testUnint) << endl;
	cout << "output in short type : " << static_cast<short>(testUnint) << endl;//为什么结果为-2?:
	cout << "output in int type : " << static_cast<int>(testUnint) << endl;
	cout << "output in double type : " << static_cast<double>(testUnint) << endl;
	cout << "output in double type : " << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl;//16进制输出
	double t = 1.14514;
	cout << "output in int type:  " << static_cast<int>(t) << endl;//将实数t转换成int
	system("pause");
	return 0;
}