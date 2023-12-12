#include<iostream>
using namespace std;
#include"mytemperature.h"
int main() {
	double cel, fah;
	cout << "请输入摄氏度：" << endl;
	cin >> cel;
	cout << "转换成华氏度为：" << celsius_to_fah(cel) << endl;
	cout << "请输入华氏度:" << endl;
	cin >> fah;	
	cout << "转换成摄氏度为：" << fahrenheit_to_cels(fah) << endl;
	return 0;

}