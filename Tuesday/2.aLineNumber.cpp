/*2. Преобразовать строку в число, если строка состоит из нескольких символов*/
#include <iostream>

using namespace std;

int aLineNumber(char* str){
	int num = 0;
	for (int i = 0; str[i] != 0; i++){
		num = num + str[i];
	}
	return num;
}

int main(){
	setlocale(LC_ALL, "russian");
	int size = 10;
	char* str = new char[size];
	cin >> str;
	cout << aLineNumber(str) << endl;
	return 0;
}