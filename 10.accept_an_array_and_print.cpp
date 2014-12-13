/*10. Функция, которая печатает массив.
Всегда передавать параметры с упором на константу.
Функция, которая распечатывает константный указатель.*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void printArr(const int *arr, int *size){
	for (int i = 0; i < *size; i++){
		cout << *(arr + i) << " ";
	}
	cout << endl;
}

int main(){
	setlocale(LC_ALL, "russian");
	srand(time(NULL));
	int const *p;

	int size = 10;
	int *arr = new int[size];
	int const max = 10;
	int const min = -10;

	for (int i = 0; i < size; i++){
		*(arr + i) = rand() % (max - min + 1) + min;
	}
	printArr(arr, &size);

	return 0;
}