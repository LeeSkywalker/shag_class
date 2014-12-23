/*
4.Возвращаем остаток строки после первого вхождения.
*/
#include <iostream>

using namespace std;

char* strK(char* str1,char simvol);

int main(){
	setlocale(LC_ALL, "russian");
	int size = 0;
	char* str1 = new char[size];
	char simvol;
	cout << "Введите символ: \n";
	cin >> simvol;
	str1 = "Hello, World!!!";
	cout << "\n";
	if (strK(str1, simvol) != 0)cout << strK(str1, simvol) << endl;
	return 0;
}

char* strK(char* str1,char simvol){
	int i = 0;
	for (; *(str1 + i) != '\0'; i++){
		if (str1[i] == simvol)return str1 + i;
	}
	return 0;
}