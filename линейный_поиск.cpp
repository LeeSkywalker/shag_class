/*3. Линейный  поиск.*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int linearSearch(int arr[], int size, int key) {

	for (int i = 0; i < size; i++){
		if (arr[i] == key){
			return i;
		}
	}
	return -1;
}

/*Присваиваем каждому значению массива случайное значение от мин. до максимума */
void fillArray(int arr[], int size, int min, int max)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}
/*Выведу массив на экран*/
/*Распечатываем массив*/
void printArr(int arr[], int size){
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}


int main(){
	srand(time(NULL));
	int const size = 10;
	int arr[size];
	int key;
	fillArray(arr, size, 0, 100);
	printArr(arr, size);

	cin >> key;
	cout << linearSearch(arr, 10, key) << "\n";

}