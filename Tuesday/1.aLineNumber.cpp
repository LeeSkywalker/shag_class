/*1. Преобразовать строку в число*/
#include <iostream>

using namespace std;

int its(char* str){
	int num = 0;
	num = str[0];
	return num;
}

int main(){
	setlocale(LC_ALL, "russian");
	int size = 10;
	char* str = new char[size];
	cin >> str;
	cout << its(str) << endl;
	return 0;
}