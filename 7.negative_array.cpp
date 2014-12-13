/*7.Функция, которая принимает массив через указатель и возвращает
новый массив через указатель, состоящий из рендомных чисел, должна
вернуть новый массив без отрицательных значений, если в массиве нет
отрицательных значений нужно вернуть nullptr*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int* positive_elements(int *arr, int *size){
	int counter = 0;
	for (int i = 0; i < *size; i++){
		if (*(arr + i) < 0)counter++;
	}

	if (counter>0){
		int *newArray = new int[counter];
		cout << "Получаем новый массив: \n";
		for (int i = 0, j = 0; i < *size; i++){
			if (*(arr + i) < 0){
				*(newArray + j) = *(arr + i);
				cout << *(newArray + j++) << " ";
			}
		}
		cout << endl;
		delete[] arr;
		return newArray;
	}
	else return nullptr;
}


int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "russian");
	int size = 10;
	int const min = -10;
	int const max = 10;
	int *arr = new int[size];

	//Инициализация
	for (int i = 0; i < size; i++){
		*(arr + i) = rand() % (max - min + 1) + min;
		cout << *(arr + i) << " ";
	}
	cout << endl;
	cout << *positive_elements(arr, &size) << "\n";

	return 0;
}