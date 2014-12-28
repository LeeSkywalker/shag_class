/*10. Копирую 1 строку в 2*/
#include <iostream>

using namespace std;

char* simpleCopyStr(char* str1, char* str2){
	int i = 0;
	for (; str2[i] != '\0'; i++)
		str1[i] = str2[i];
	str1[i] = 0;
	return str1;
}

int main(){
	setlocale(LC_ALL, "russian");
	char str1[50];
	char str2[50] = "aaaa";
	cout << simpleCopyStr(str1, str2) << endl;
	return 0;
}