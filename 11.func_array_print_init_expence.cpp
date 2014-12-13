/*11. Заполняем массив случайными числами.
Вывести сумму, процент, количество элементов, положительных,
отрицательных.

Функция, которая заполняет
-распечатывает
-подсчитывает
*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//Функция которая принимает массив и количество элементов и рандомно заполняет
int* randInit(int *arr, int *size){
	int const max = 10;
	int const min = -10;

	for (int i = 0; i < *size; i++){
		*(arr + i) = rand() % (max - min + 1) + min;
	}
	return arr;
}

//Функция которая распечатывает массив
void printArr(const int *arr, int *size){
	for (int i = 0; i < *size; i++){
		cout << *(arr + i) << " ";
	}
	cout << endl;
}

//Функция подсчетов
void expenceArr(int *arr, int *size){
	int sum = 0;
	int num_neg = 0;
	int num_pos = 0;
	double persent_neg, persent_pos;

	for (int i = 0; i < *size; i++){
		if (*(arr + i) < 0) num_neg++;
		else num_pos++;
		sum += *(arr + i);
	}
	cout << "Общее количество элементов = " << *size << "\n";
	cout << "Количество положительных элементов = " << num_pos << "\n";
	cout << "Количество отрицательных элементов = " << num_neg << "\n";
	cout << "Сумма элементов = " << sum << "\n";
	persent_pos = double(*size) / 100 * num_pos;
	persent_neg = double(*size) / 100 * num_neg;
	cout << "Процент положительных элементов в массиве = " << persent_pos << "% \n";
	cout << "Процент отрицательных элементов в массиве = " << persent_neg << "% \n";

}

int main(){
	setlocale(LC_ALL, "russian");
	srand(time(NULL));
	int const *p;

	int size = 10;
	int *arr = new int[size];

	randInit(arr, &size);
	printArr(arr, &size);
	expenceArr(arr, &size);

	return 0;
}