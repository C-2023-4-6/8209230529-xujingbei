#include<iostream>
using namespace std;
int sfg(int a,int b)
{	
	int i = (a + 1) * 2;
	if(b==10){
		return a;
	}
	else {
		return sfg(i, b + 1);
	}

}
int main() {

	int a = 1, b = 0;
	cout << sfg(a, b);
	return 0;
}