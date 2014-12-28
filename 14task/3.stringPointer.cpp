/*3.Указатель на строку*/
#include <iostream>

using namespace std;


void main(){
	char *message;
	message = "and bye!";//message - указатель на строку
	//cin >> message;//будет ошибка в момент ввода, хотя скомпилируется
	cout << message << endl;//нельзя использовать операцию cin
}