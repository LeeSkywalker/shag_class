/*Передаю адрес двух переменных. 
Возвращаю наибольшую переменную из двух.
*/
#include <iostream>

using namespace std;

int num_two(int *num_1, int *num_2) {
	if (*num_1 > *num_2) return *num_1;
	else return *num_2;
}
int main(){
	setlocale(LC_ALL, "russian");
	int num_1, num_2;
	cin >> num_1 >> num_2;
	cout<<"\n"<<num_two(&num_1, &num_2)<<"\n";
	return 0;
}