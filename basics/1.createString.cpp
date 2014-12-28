/*1. Разные способы создания строк*/
#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "russian");
	char str1[] = { 'H', 'e', 'l', 'l', 'o', '\0' };//необходимо писать нулевой символ
	char str2[] = { 'H', 'e', 'l', 'l', 'o', 0 };//или ноль
	char str3[] = "Hello";//0 символ добавляется автоматом
	return 0;
}