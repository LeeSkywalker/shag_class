/*Вывод звездочек через рекурсию*/
#include <iostream>

using namespace std;

void star(int num){
	if (num == 0){
		cout << "\n";
		return;
	}
	cout << "*";
	star(num - 1);
}

using namespace std;

int main(){
	int num = 5;
	star(num);

	return 0;
}
