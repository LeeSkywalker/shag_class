/*7.Копирование 1 массива в 2*/
#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "russian");
	char str1[50]="Hello";
	cout << str1 << endl;
	strcpy(str1, "Hello World");
	cout << str1 << endl;
	return 0;
}