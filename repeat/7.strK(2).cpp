/*7.Возвращаем остаток строки после первого вхождения*/
#include <iostream>

using namespace std;

char* strK(char* str, char simvol){
	for (int i = 0; str[i] != 0; i++){
		if (str[i] == simvol) return str + i;//Сдвигаем указатель и возвращаем все что после него
	}
	return 0;
}

int main(){
	setlocale(LC_ALL, "russian");
	int size = 30;
	char simvol;
	char* str = new char[size];
	strcpy(str, "Hello, World!!!");
	cout << "Введите символ: \n";
	cin >> simvol;

	if (strK(str, simvol) != 0)cout << strK(str, simvol) << endl;

	return 0;
}