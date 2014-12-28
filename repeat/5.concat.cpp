/*5.Конкатинация строк
Функция, которая принимает два параметра, нужно в первый массив дописать второй.
*/
#include <iostream>

using namespace std;

char* concat(char* str1, char* str2){
	int i = 0, j = 0;
	for (i=0; str1[i] != 0; i++);
	for (j=0; str2[j] != 0; j++,i++){
		str1[i] = str2[j];
	}
	str1[i] = '\0';
	return str1;
}

int main(){
	setlocale(LC_ALL, "russian");
	int size = 30;
	char* str1 = new char[size];
	char* str2 = new char[size];
	cout << "Первая строка: \n";
	cin.getline(str1, size);
	cout << "Вторая строка: \n";
	cin.getline(str2, size);
	cout << "\n" << concat(str1, str2) << endl;
	return 0;
}