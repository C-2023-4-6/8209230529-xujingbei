#include<iostream>
#include<iomanip>
using namespace std;

int main()//华氏度转摄氏度
{
    float t;
    cout << "请输入一个华氏度" << endl;
    cin >> t;
    cout << "换算成摄氏度约为:  " << endl;
    float g = (t - 32) / 1.8;
    printf("%.2f", g);
    return 0;










}

