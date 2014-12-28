/*1.Пример инициализации строкового массива*/
#include <iostream>

using namespace std;

int n = 5;
//Инициализация строкового массива
char line[5] = { 'C', 'a', 't', '!', '\0' };
void main(){
	cout << "Word: ";
	for (int i = 0; i < n; i++){
		cout << line[i];
	}
}