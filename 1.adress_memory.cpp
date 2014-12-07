/*Выделим динамически память, пользователь введет размерность*/
#include <iostream>

using namespace std;

int main(){
	int size;
	cin >> size;
	int *p_arr = new int[size];
	for (int i = 0; i < size; i++){
		cout << "*p_arr=" << *p_arr << "\n";//* - что находится в адресе
	}
	return 0;
}