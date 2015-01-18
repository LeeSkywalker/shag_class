/*4. Более явный вид*/
#include <iostream>

using namespace std;

//функция инициализирует указатель одномерного массива
void Alloc(int **arr){//изминения с указателем будут происходить напрямую
	*arr = new int[10];
	*arr[0] = 42;
}
int main(){
	int *p;
	Alloc(&p);
	cout << p[0] << endl;

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