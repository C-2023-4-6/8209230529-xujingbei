#include<iostream>
using namespace std;
int main() {
	bool cab[101];
	for (int i = 1; i < 100; i++) {
		cab[i] = true;
	}

	for (int i = 2; i <= 100; i++)
	{
		for (int n = i; n <=100; n=n+i) {
			cab[n] = !cab[n];
			
		}
	}
	cab[100] = true;
	for (int i = 0; i <=100; i++)
	{
		if (cab[i] == true) {
			cout << i  << " ";
		}
	}

	return 0;
}