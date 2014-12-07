/*Используя указатели находим произведение членов массива*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	setlocale(LC_ALL, "russian");
	srand(time(NULL));
	int *arr = new int[3];

	int const min = -44;
	int const max = 76;
	int mult = 1; //произведение

	//Инициализация
	for (int i = 0; i < 3; i++){
		*(arr+i) = rand() % (max - min + 1) + min;
		cout << *(arr+i) << " ";
	}

	for (int i = 0; i < 3; i++){
		mult = mult * *(arr+i);
	}
	cout << "\n \t Произведение=" << mult << "\n";
}