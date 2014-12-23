/*
1.
Переводит маленькие буквы в большие
*/
#include <iostream>

using namespace std;

char* strUp(char* str){
	for (int i = 0; str[i]!=0; i++){
		if ((str[i] > 64) && (str[i] < 91)) continue;
		else str[i] -= 32;
	}
	return str;
}

int main(){
	setlocale(LC_ALL, "russian");
	int size = 255;
	char *str = new char[size];
	cin >> str;
	cout << "\n" << strUp(str) << "\n";
}