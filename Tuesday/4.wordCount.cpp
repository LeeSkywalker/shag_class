/*4.Посчитать количество слов в строке*/
#include <iostream>

using namespace std;

int wordCount(char* str){
	int count = 0, i = 0;
	for (; str[i] != 0; i++){
		if (i == 0 || str[i - 1] == ' ')continue;
		if (str[i] == ' ')count++;
	}
	if (str[i - 1] != ' ')count++;
	if (count == 0)return 0;
	else return count;
}

int main(){
	setlocale(LC_ALL, "russian");
	char str[] = "  sdsdsd sdsds sdsd msdfmds         ";
	cout << wordCount(str) << endl;
	return 0;
}