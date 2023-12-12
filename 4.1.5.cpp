#include<iostream>
#include<cstring>
using namespace std;
int indexOf( char s1[],char s2[])
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++)

        {
            if (s2[i + j] != s1[j])
                break;
            if (j == len1-1)
                return i+1;
        }
    }
    return -1;
};
int main() {
	char s1[100];
	char s2[100];
	cout << "enter the first string:" << endl;
	cin.getline(s1, 100);
	cout << "enter the second string:" << endl;
	cin.getline(s2, 100);
    cout<<"the index is: " << indexOf(s1, s2);
    return 0;
}