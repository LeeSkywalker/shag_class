/*6.Так нельзя делать*/
#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "russian");
	char* str = new char[50]();//заполнение 0
	str = "Hello";
	/*Hello - это контстанта, str - не константа,
	нельзя изменять константу*/
	str[0] = "T";//Так нельзя делать!!! Нельзя изменять константу.
	return 0;
}