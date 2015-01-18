#include <iostream>
using namespace std;

int main(){
	int **arr1 = new int *[10];

	for (int i = 0; i < 10; i++){
		arr1[i] = new int[10];
		for (int j = 0; j < 10; j++){
			arr1[i][j] = i;
		}
	}


	int **arr2 = new int*[11];

	for (int i = 0; i < 10; i++){
		arr2[i] = arr1[i];
	}

	int arr3[10];
	for (int i = 0; i < 10; i++){
		arr3[i] = 5;
	}

	arr2[10] = arr3;

	for (int i = 0; i < 11; i++){
		for (int j = 0; j < 10; j++){
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	return 0;
}