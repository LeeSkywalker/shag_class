/*9.Создать функцию, которая принимает две строки.
Скопировать 1 массив в 2.*/
#include <iostream>

using namespace std;

char* strCopy(char* str1, char* str2){
	int i = 0;
	for (; str1[i] != 0; i++);
	for (int j = 0; str2[j] != 0; j++, i++){
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
	cout << "Введите первую строку: \n";
	cin >> str1;
	cout << "Введите вторую строку: \n";
	cin >> str2;
	cout << "\n" << strCopy(str1, str2) << endl;
	return 0;
}