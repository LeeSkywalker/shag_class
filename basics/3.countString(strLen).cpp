/*3.Написать функцию, которая вернет длину строки*/
#include <iostream>

using namespace std;

int countString(char* str){ //strLen
	int count = 0;
	for (int i = 0; str[i] != 0; i++) count++;
	return count;
}

int main(){
	setlocale(LC_ALL, "russian");
	int size = 255;
	char* str = new char[size];
	cin.getline(str,size);
	cout << "\n"<<countString(str) << endl;
	return 0;
}