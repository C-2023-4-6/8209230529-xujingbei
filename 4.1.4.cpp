#include<iostream>
using namespace std;
int cha(int b[],int size) {

	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < size-1; j++)
			if (b[j] > b[j + 1])
			{
				swap(b[j], b[j + 1]);
				changed = true;
			}
	} while (changed);
	return 0;
}//排序
void merge(int list1[], int size1, int list2[], int size2, int list3[]) {
	int size = size1 + size2;
	 cha(list3, size);
	 cout << "The merged list is: " ;
	 for (int i = 0; i < size; i++) {
		 cout << list3[i] << " ";
	 }

}//主体
int main() {
	int size1;
	cout << "Enter list1:" << endl;
	cin >> size1;
	 int list1[80];
	 for (int i = 0; i < size1; i++)
	 {
		 cin >> list1[i];
	 }
	 int size2;
	 cout << "Enter list2:" << endl;
	 cin >> size2;
	 int list2[80];
	 for (int i = 0; i < size2; i++)
	 {
		 cin >> list2[i];
	 }
	 int list3[160];
	 for (int i = 0; i < size1 + size2; i++) {
		 if (i <size1) { list3[i] = list1[i]; }
		 else if (i >= size1) { list3[i] = list2[i - size1]; }
	 }//合并数组
	 merge(list1, size1, list2, size2, list3);
	 return 0;

	

}