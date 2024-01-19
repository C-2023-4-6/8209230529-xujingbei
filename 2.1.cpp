#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char a;
	cout << "ÇëÊäÈëÒ»¸ö×ÖÄ¸" << endl;
	cin >> a;
	int k;
	k = int(a);
	if (k< 91)
		cout << k << endl;
	else
		cout << char(a-32) << endl;
    
    

	return 0;







}