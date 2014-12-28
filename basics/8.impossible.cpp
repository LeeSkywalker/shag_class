/*8. Константный указатель*/
#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "russian");

	char str1[50];//эквивалентна второй записи
	char *const str = new char[50];/*константный указатель нужно инициализировать
								   сразу при создании*/
	str = "Hello";
	str1 = "Hello";
	/*ОШИБКА*/
	return 0;
}