/*Функция, которая преобразует все символы в маленькие, принимает указатель и возвращает указатель*/
#include <iostream>

using namespace std;

char* strLowerCase(char* str){
	for (int i = 0; str[i] != 0; i++){
		str[i] += 32;
	}
	return str;
}

int main(){
	setlocale(LC_ALL, "russian");
	int size = 255;
	char* str = new char[size];
	cin >> str;
	cout << "\n" << strLowerCase(str) << "\n";
	return 0;
}