#include<iostream>
using namespace std;
int main() {
	int a[10];
	int b[10];
	cout << "enter 10 numbers:" << endl;
	int j = 1;
	for (int i = 0; i < 10; i++) 
	{
		cin >> b[i];
	}
	a[0] = b[0];
	for (int i = 1; i < 10; i++) 
	{
		int n;
		for (n = 0; n < j; n++)
		{
			if (b[i] == a[n])
			{
				break;
			}
		}
		if (n == j) { 
			a[j] = b[i];
			j++;
		}
	}
	cout << "The distinct numbers are:" << endl;
	for (int n = 0; n < j; n++)
	{
		cout << a[n] << " ";
	}

	return 0;
}

 