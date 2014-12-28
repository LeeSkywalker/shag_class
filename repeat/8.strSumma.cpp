/*8. Сравнение двух строк.
Если первая строка больше возвращаем 1. Если вторая -1. Если равны 0.
*/

#include <iostream>

using namespace std;

int strSumma(char* str1, char* str2){
	int size1 = 0, size2 = 0;
	for (int i = 0; str1[i] != 0; i++) size1++;
	for (int i = 0; str2[i] != 0; i++) size2++;
	if (size1 > size2) return 1;
	else if (size1 < size2)return -1;
	else {
		for (int i = 0; str1[i] != 0; i++){
			if (str1[i] == str2[i])continue;
			else if (str1[i]>str2[i])return 1;
			else return -1;
		}
	}

	return 0;
}

int main(){
	setlocale(LC_ALL, "russian");
	int size = 30;
	char* str1 = new char[size];
	char* str2 = new char[size];
	strcpy(str1, "aaaa");
	strcpy(str2, "aaaa");
	cout << "\n";

	cout << strSumma(str1, str2) << endl;
	return 0;
}