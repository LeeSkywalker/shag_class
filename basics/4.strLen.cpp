/*4.Функция, которая вернет длину строки*/
#include <iostream>

using namespace std;

int strLen(char str[])
{
	int len = 0;
	while (str[len++]);
	return len - 1;
}
int main(){
	setlocale(LC_ALL, "russian");
	int const size = 50;
	char str[size];
	cin.getline(str,size);

	cout << "Длина строки = " << strLen(str) << endl;
	return 0;
}