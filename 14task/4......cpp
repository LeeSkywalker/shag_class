/*4.Задача*/
#include <iostream>

using namespace std;

char* message;
char privet[] = "and bye!";
char* pr = privet;
void main(){
	message = "Hello";
	cout << " " << message << " " << pr << "\n";
	int i = 0;
	while (*(pr + i) != '\0')
	{
		cout << *(pr + i++) << " ";
	}
}