/*6.В функцию передается строка, необходимо убрать все лишние символы*/
#include <iostream>

using namespace std;

char* delSpace(char* str){
	int i = 0;
	for (; str[i] != 0; i++){
		if (str[i] == ' ' && str[i - 1] == ' ' || i == 0){
			int j = i;
			for (; str[j] == ' '; j++); /*Пропускаем все лишние пробелы*/
			for (int k = i, m = j; str[k] != 0; k++, m++)/*С того места, где начался пробел присваиваем 
														 строку там где пробел закончился*/
				str[k] = str[m];
		}
	}
	return str;
}

int main(){
	setlocale(LC_ALL, "russian");
	char* str = new char[50];
	strcpy(str, "                 Hello  hello    1               ");
	cout << delSpace(str) << endl;
	return 0;
}