/*12. Создать функцию копирующую массив.*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int *copyArr(const int *arr, int size){
	
	int *newArray = new int[size];
	for (int i = 0; i < size; i++){
		newArray[i] = *(arr + i);
	}
	return newArray;
}

int main(){
	setlocale(LC_ALL, "russian");
	srand(time(NULL));
	int const min = -10;
	int const max = 10;
	int size = 10;
	int *arr = new int[size];
	cout << "Создала массив : \n";
	for (int i = 0; i < size; i++){
		*(arr + i) = rand() % (max - min + 1) + min;
		cout << *(arr + i) << " ";
	}

	cout << *copyArr(arr, size) << "\n";

	return 0;
}