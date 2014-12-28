/*Функция, которая преобразует все буквы в большие*/
#include <iostream>

using namespace std;

char* strUp(char* str){
	for (int i = 0; str[i] != 0; i++) str[i] -= 32;
	return str;
}

int main(){
	setlocale(LC_ALL, "russian");
	int size = 255;
	char* str = new char[size];
	cin >> str;
	cout << "\n" << strUp(str) << "\n";
	return 0;
}

