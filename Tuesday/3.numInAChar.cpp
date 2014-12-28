/*3.Преобразовать число в строку*/
#include <iostream>

using namespace std;

char numInAChar(int number){
	char simvol;
	simvol = number;
	return simvol;
}

int main(){
	setlocale(LC_ALL, "russian");
	int number;
	cout << "Введите число (Например: 97=a): \n";
	cin >> number;
	/*number into a character*/
	cout << numInAChar(number) << endl;
	return 0;
}