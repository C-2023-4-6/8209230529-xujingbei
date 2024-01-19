#include<iostream>
using namespace std;
int main() {
	int a = 2;
	int sum;  
	float cost;
	for ( sum = 0;a<=100 ; a *= 2)
	{
		int b = 1;
		sum = a + sum;
	    cost = sum * 0.8 / b;
		b++;
	}
	cout << cost;












	return 0;
}