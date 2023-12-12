#include<iostream>
using namespace std;
int main() {
	double b[10];
	cout << "enter 10 numbers:" << endl;
	for (int i = 0; i < 10; i++) 
	{
		cin >> b[i];
	}

	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (b[j] > b[j + 1])
			{
				swap(b[j], b[j + 1]);
				changed = true;
			}
	} while (changed);
	cout << "ÅÅÐòºó£º" << endl;
	for (int n = 0; n < 10; n++)
	{
		cout << b[n] << " ";
	}

	return 0;
	

	









}