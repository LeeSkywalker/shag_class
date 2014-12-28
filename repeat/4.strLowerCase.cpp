/*4.Функция, которая преобразует только большие символы в маленькие*/
#include <iostream>

using namespace std;

char* strLowerCase(char* str){
	for (int i = 0; str[i] != 0; i++){
		if ((str[i] > 64) && (str[i] < 91))
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