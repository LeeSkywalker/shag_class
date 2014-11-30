/*ѕеревод из одной системы исчислени¤ в другую*/
#include <iostream>

using namespace std;

void from_10_to_other(int number, int other) {
	int mas[512];
	int counter = 0;
	while (number){
		mas[counter] = number%other;
		number /= other;
		counter++;
	}

	for (int i = counter - 1; i >= 0; i--){
		if (mas[i] >= 10){
			cout << char('A' + mas[i] - 10);
			continue;
		}
		cout << mas[i];
	}
	cout << endl;
}

int main(){
	from_10_to_other(123456, 25);

	return 0;
}