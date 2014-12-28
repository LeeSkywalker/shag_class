/*5.Написать строку символов, которая принимает строку и проверяет правильно ли расставленны скобки*/
#include <iostream>

using namespace std;

/*correct brackets*/
bool correctBrackets(char* str){
	int num = 0;
	for (int i = 0; str[i] != 0; i++){
		if (num < 0)return false;
		else if (str[i] == '(')num++;
		else if (str[i] == ')')num--;
	}
	if (num==0) return true;
	else return false;
}

int main(){
	setlocale(LC_ALL, "russian");
	char str[] = "())";
	cout << correctBrackets(str) << endl;
	return 0;
}