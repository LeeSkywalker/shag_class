/*Указатель - переменная, которая хранит всего лишь адрес.
К указателям можно прибавлять числа.
*/
/*2)Меняю адрес указателя*/
#include <iostream>

using namespace std;
#define SIZE 4
int main(){
	setlocale(LC_ALL, "russian");
	int arr[SIZE] = { 1, 2, 3, 4 };


	cout << "Адрес указателя = ";
	cout << arr << "\n";
	*arr += 2;
	cout << *arr << "\n";


	return 0;
}