/*Выделяем память двумерному динамическому массиву и потом очищаем эту память*/

#include <iostream>

using namespace std;

int main(){
	int **arr = new int*[10];

	for (int i = 0; i < 10; i++){
		arr[i] = new int[10];
	}

	for (int i = 0; i < 10; i++){
		delete[] arr[i];
	}

	delete[] arr;

	return 0;
}