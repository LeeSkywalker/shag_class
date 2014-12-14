#include <iostream>
#include <cstdlib>
#include <locale>
//#include <conio>
using namespace std;

void main(){
	setlocale(LC_ALL, "russian");
	int n, m;
	cout << "Введите количество строк: "; cin >> n;
	cout << "Введите количество столбцов: "; cin >> m;

	//Формирование массива
	int **Massiv = new int*[n]; //Выделение памяти под массив указателей для строк
	for (int i = 0; i < n; i++){
		Massiv[i] = new int[m];//Выделение памяти под массив столбцов
	}

	//Заполнение матрицы случайными числами
	srand(time(NULL));//Инициализация
	for (int i(0); i < n; i++){
		for (int j(0); j < m; j++){
			Massiv[i][j] = rand() % 10;//Присвоение случайного элемента
		}
	}

	//Вывод матрицы
	for (int i(0); i < n; i++){
		cout << "Строка " << i << "[";
		for (int j(0); j < m; j++){
			if (j == m - 1){
				cout << Massiv[i][j] << "]" << endl;
				break;
			}
			else cout << Massiv[i][j] << ",";
		}
	}

	//Освобождение памяти
	for (int i = 0; i < n; i++){
		delete[] Massiv[i];//Освобождение памяти по столбцам
	}
	delete[] Massiv; //Освобождение памяти по строкам

}