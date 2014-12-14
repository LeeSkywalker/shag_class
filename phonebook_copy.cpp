#include <iostream>

using namespace std;

using namespace std;

void helloUser();
int findPhone(int *phonebook, int size, int number);
int *addPhone(int *phonebook, int size, int number);
int *changePhone(int *phonebook, int size, int index, int number);
void *printPhone(int *phonebook, int size);
int deletePhone();

int main(){
	setlocale(LC_ALL, "russian");
	int number;
	int oper;
	int size = 3;
	int *phonebook = new int[size];
	phonebook[0] = 249;
	phonebook[1] = 244;
	phonebook[2] = 222;
	helloUser();
	cin >> oper;
	switch (oper){
	case 1:{
			   //Найти телефон в справочнике
			   cout << "Введите номер телефона: \n";
			   cin >> number;
			   cout << "Телефон под номером " << findPhone(phonebook, size, number) << "\n";
			   break;
	}
	case 2:{
			   //Добавить телефон
			   cout << "Введите номер телефона: \n";
			   cin >> number;
			   addPhone(phonebook,size,number);
			   printPhone(phonebook, size);

	}
	case 3:{

			   //Изменить телефон
			   cout << "Введите номер который хотите изменить: \n";
			   cin >> number;
			   int index = findPhone(phonebook, size, number);
			   while(index==0) {
				   cout << "В справочнике нет данного номера. Введите другой. \n";
				   cin >> number;
				   index = findPhone(phonebook, size, number);
			   }
			   cout << index << "\n";
			   cout << "Введите новый номер телефона: \n";
			   cin >> number;
			   changePhone(phonebook, size, index, number);
			   printPhone(phonebook, size);
	}
	case 4: {
				//Удалить телефон из справочника

	}
	case 5: {
				//Выйти из программы
				break;
	}
	default:{
				cout << "Введенной операции не существует. \n";
	}
	}
}

void helloUser(){
	cout << "\t Телефонный справочник: \n";
	cout << "Введите желаемую операцию. \n";
	cout << "1. ---Узнать телефон. \n";
	cout << "2. ---Добавить телефон. \n";
	cout << "3. --- Изменить телефон. \n";
	cout << "4. ---Удалить телефон из справочника. \n";
	cout << "5. ---Выйти из программы. \n";
}

int findPhone(int *phonebook, int size, int number){
	int index;
	for (int i = 0; i < size; i++){
		if (phonebook[i] == number){
			index = i + 1;
			return index;
		}
	}
	return 0;
}

int *addPhone(int *phonebook, int size, int number){

	int *tempAddPhone = new int[size + 1];
	for (int i = 0; i < size; i++){
		tempAddPhone[i] = phonebook[i];

	}
	tempAddPhone[size] = number;
	delete[] phonebook;
	phonebook = tempAddPhone;
	phonebook[size] = number;
	delete[] tempAddPhone;
	return phonebook;
}

int *changePhone(int *phonebook, int size, int index, int number){
	for (int i = 0; i < size; i++){
		if (i == index-1){
			phonebook[i] = number;
			return phonebook;
		}
	}
	return 0;
}

int deletePhone(){
	return 0;
}

void* printPhone(int *phonebook, int size){
	for (int i = 0; i < size; i++){
		cout << phonebook[i] << " ";
	}
	return 0;
}