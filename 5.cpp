/*5.Создание динамического массива строк*/
#include <iostream>
using namespace std;

void printArr(char **arr, int size){
	cout << "Вывод строк : \n";

	for (int i = 0; i < size; i++){
		cout << i + 1 << "-ая строка: " << arr[i] << "\n";
	}
}
int main(){
	setlocale(LC_ALL, "russian");
	char **arr = new char *[3];
	int size = 30;

	for (int i = 0; i < 3; i++){
		arr[i] = new char[size];
	}

	for (int i = 0; i < 3; i++){
		cout << "Введите " << i + 1 << "-ую строку: \n";
		cin.getline(arr[i], size);
	}

	printArr(*&arr, 3);
	return 0;
}