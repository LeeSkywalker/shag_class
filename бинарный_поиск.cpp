/*Ѕинарный поиск*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int binarySearch(int arr[], int min, int max, int key) {
	int middle = (max + min) / 2;
	if (middle == max&& arr[middle] != key) return -1;
	if (arr[middle] == key) {
		return middle;
	}
	else if (arr[middle] > key){

		return binarySearch(arr, min, middle, key);
	}
	else {
		return binarySearch(arr, middle + 1, max, key);
	}
}

/*ѕрисваиваем каждому значению массива случайное значение от мин. до максимума */
void fillArray(int arr[], int size, int min, int max)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}

/*–аспечатываем массив*/
void printArr(int arr[], int size){
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void sortArray(int arr[], int size){
	for (int i = 0; i<size; ++i)
	for (int j = i + 1; j<size; ++j)
	if (arr[j]<arr[i])
		swap(arr[i], arr[j]);

}


int main(){
	srand(time(NULL));
	int const size = 10;
	int arr[size];
	int key;
	fillArray(arr, size, 0, 100);
	printArr(arr, size);
	sortArray(arr, size);
	printArr(arr, size);

	cin >> key;
	cout << binarySearch(arr, 0, size, key) << "\n";

}