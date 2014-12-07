/*Передать массив. 
Проверить есть ли в массиве отрицательные значения.
Если есть, тогда исключить эти значения,
на основе этого создать новый массив в котором будут только
положительные элементы.
Если массив не содержит отрицательных элементов - вернуть первоначальный
массив.
*/
/*Функция, которая принимает массив через указатель.
*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int* getArr(int *arr, int *size1){
	//int newArr
	int size = *size1;
	int sizeNew; //размер определяемый пользователем
	int counter = 0;//количество отрицательных значений в первом массиве
	int userCounter;

	for (int i = 0; i < size; i++){
		if (*(arr + i) < 0) {
			counter++;
		}
	}
	//cout << "Количество отрицательных элементов = " << counter << "\n";
	//cin >> userCounter;
	if (counter > 0) {
		cout << "Введите количество элементов для нового массива: \n";
		cin >> userCounter;
		sizeNew = size - counter;

		int *newArray = new int[sizeNew];
		cout << "size=" << sizeNew << "\n";
		cout << "*newArray=" << *newArray << "\n";
		for (int i = 0, j = 0; i < size; i++){
			if (*(arr + i) >= 0) {
				*(newArray + j++) = *(arr + i);
			}
		}
		*size1 = sizeNew;
		delete[] arr;
		return newArray;
	}

	return arr;
}
int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "russian");
	int size = 10;
	int *arr = new int[size];
	int const min = -10;
	int const max = 10;
	//arr = {};
	//Заполняю массив значениями
	for (int i = 0; i < size; i++){
		*(arr + i) = rand() % (max - min + 1) + min;
		cout << *(arr + i) << " "; //проверяю заполнение
	}
	cout << "\n";
	arr = getArr(arr, &size);

	for (int i = 0; i < size; i++){
		cout << *(arr + i) << " "; //проверяю заполнение
	}

	return 0;
}

