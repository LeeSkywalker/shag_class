/*
���� ���� � ������:
��� - ����� ������� ����� �� ����� �����,
������ , ���� ����� ���� , �� �� �� ����� �����.
����� ���������� ���������,
������ ����� ������ ���� 0, �������� �� 100 �� 9999
��������� ��� �� ����� ���������

*/

#include <iostream>
#include <ctime>

using namespace std;

void main(){
	setlocale(LC_ALL, "russian");
	int number, compnumb, compnum_1, compnum_2, compnum_3, compnum_4, num_1, num_2, num_3, num_4, korova, bik;
	srand(time(NULL));
start:
	compnumb = rand() % 10000;

	cout << "compnumb=" << compnumb << "\n";
	compnum_4 = compnumb % 10;
	compnum_3 = (compnumb / 10) % 10;
	compnum_2 = (compnumb / 10 / 10) % 10;
	compnum_1 = compnumb / 10 / 10 / 10;


	cout << compnum_1 << " " << compnum_2 << " " << compnum_3 << " " << compnum_4 << " \n";

	if (compnum_1 == compnum_2 || compnum_1 == compnum_3 || compnum_1 == compnum_4 || compnum_2 == compnum_3 || compnum_2 == compnum_4 || compnum_3 == compnum_4){
		goto start;
	}
restart:
	korova = 0;
	bik = 0;
	cout << "������� �����: \n";
	cin >> number;
	num_4 = number % 10;
	num_3 = (number / 10) % 10;
	num_2 = (number / 10 / 10) % 10;
	num_1 = number / 10 / 10 / 10;




	if (num_1 == compnum_1) bik++;
	else if (num_1 == compnum_2 || num_1 == compnum_3 || num_1 == compnum_4) {
		korova++;
	}



	if (num_2 == compnum_2) bik++;
	else if (num_2 == compnum_1 || num_2 == compnum_3 || num_2 == compnum_4) {
		korova++;
	}



	if (num_3 == compnum_3) bik++;
	else if (num_3 == compnum_1 || num_3 == compnum_2 || num_3 == compnum_4) {
		korova++;
	}


	if (num_4 == compnum_4) bik++;
	else if (num_4 == compnum_1 || num_4 == compnum_2 || num_4 == compnum_3) {
		korova++;
	}

	cout << "����� = " << bik << "; ����� = " << korova << "; \n";

	if (bik != 4) goto restart;
}