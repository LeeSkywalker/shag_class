/*14. Написать функцию swap, которая принимает два указателя и 
меняет значения.

Две ссылки, которые пытаются их поменять.
*/
#include <iostream>

using namespace std;

//Меняет по указателю
void swaPoint(int *a, int *b){
	int *temp;
	*a = *b;
	*b = *temp;
}

//Меняет по ссылкам
void swapLinks(int &a, int &b){
	//int temp;
//	temp = a;
	//a = b;
	//b = temp;
}

int main(){
	int a = 5, b = 10;
	//swapLinks(a, b);
	swaPoint(&a, &b);

	cout << "a=" << a << " ";
	cout << "b=" << b << " ";
}