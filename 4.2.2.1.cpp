#include<iostream>
using namespace std;
int indexOf(char*s1, char*s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++)
        {
            if (s2[i + j] != s1[j])
                break;
            if (j == len1 - 1)
                return i + 1;
        }
    }
    return -1;
};
int main() {
	char* s1=new char[20];
	char* s2=new char[20];
	cout << "enter string 1:" << endl;
	cin.getline(s1,20);
	cout << "enter string 2:" << endl;
	cin.getline(s2,20);
    cout << "the index of is: " << indexOf(s1, s2);
    delete[]s1,s2;
}