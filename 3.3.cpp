#include<iostream>
using namespace std;
#include"mytemperature.h"
int main() {
	double cel, fah;
	cout << "���������϶ȣ�" << endl;
	cin >> cel;
	cout << "ת���ɻ��϶�Ϊ��" << celsius_to_fah(cel) << endl;
	cout << "�����뻪�϶�:" << endl;
	cin >> fah;	
	cout << "ת�������϶�Ϊ��" << fahrenheit_to_cels(fah) << endl;
	return 0;

}