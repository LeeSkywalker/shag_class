/*5. Const str*/
#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "russian");
	char* str = new char[50](); //Заполнение 0 
	str = "Hello";//Hello -константа, str - не константа, нельзя изменять константу
	cout << str;
	return 0;
}