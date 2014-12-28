/*2.*/
#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "russian");
	char str1[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char str2[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	char str3[] = "Hello";

	char sm = 'w';
	char ss[] = "w";//+0 символ

	cout << str1;//разрешено выводить так
	return 0;
}