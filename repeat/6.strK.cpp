/*6.Возвращаем остаток строки после первого вхождения*/
#include <iostream>

using namespace std;


char* strK(char* str, char simvol){

	for (int i = 0; str[i] != 0; i++){
		if (str[i] == simvol)return str + i;
	}

	return 0;
}

int main(){
	setlocale(LC_ALL, "russian");
	int size = 255;
	char* str = new char[size];
	char simvol;
	cout << "Введите строку : \n";
	cin.getline(str, size);
	cout << "Введите символ: \n";
	cin >> simvol;

	if (strK(str, simvol) != 0)cout << "\n" << strK(str, simvol) << endl;
	return 0;
}