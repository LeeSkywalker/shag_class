/*2. Функция, которая преобразует все буквы в маленькие*/
#include <iostream>

using namespace std;

char* strLowCase(char* str){
	for (int i = 0; str[i] != '\0'; i++){
		if ((str[i] > 96) && (str[i] < 123)) continue;
		else str[i] += 32;
	}
	return str;
}

int main(){
	setlocale(LC_ALL, "russian");
	int size = 255;
	char* str = new char[size];
	cin >> str;
	cout<<strLowCase(str);
	return 0;
}