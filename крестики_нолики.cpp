#include <iostream>

using namespace std;

void printTable();
void makeStep(); //делать ход
bool isWin();

char table[3][3] = {};

int main(){
	//программа будет длиться пока кто-то не победит

	/*!-инвертирует логическое значение, если было true - станет false*/
	while (!isWin()){
		printTable();
		makeStep();
	}
	printTable();
	return 0;
}


void printTable(){
	cout << "Player1 X .....Player2 0" << "\n" << "\n";
	system("cls"); //для Windows
	//system("clear"); //для Linux
	int counter = 1;
	
	for (int i = 0; i < 3;i++){
		cout << "|";

	for (int j = 0; j < 3;j++){
		if (table[i][j]==0){
			cout << counter ;
		}
		else{
			cout << table[i][j];
		}
		cout << "|";
		counter++;
		}
		cout << "\n";
	}
	
}

bool isCheckWin(char ch) {
	for (int i = 0; i < 3; i++){
		if (table[i][0] == ch && table[i][1] == ch && table[i][2] == ch){

			//нахожу разницу между маленьким и большим символом и меняю маленький символ на большой
			table[i][0] = ch + ('A' - 'a');
			table[i][1] = ch + ('A' - 'a');
			table[i][2] = ch + ('A' - 'a');
		return true;
		}
	}
	return false;
}


bool isCorrectStep(int step){

	if (step >= 1 && step <= 9 && table[(step - 1) / 3][(step - 1) % 3] == 0){
		return true;
	}
	cout << "Try again:";
	return false;

}

void makeStep(){
	static bool isPlayer1 = true;
	int step;
	char ch; //то каким символом мы будем ходить

	if (isPlayer1){
		cout << "Player1 enter your step: ";
		ch = 'x';
	}
	else{
		cout << "Player2 enter your step: ";
		ch = 'o';
}


	isPlayer1 = !isPlayer1;
	do {
	cin >> step;
	} while (!isCorrectStep(step));

	/*по данной формуле мы вычисляем 9 строку, у нас от 0 до 8*/
	int row = (step-1 )/ 3;
	int col = (step-1) % 3;

	table[row][col] = ch;

}

bool isWin(){
	if (isCheckWin('x') || isCheckWin('o')){
		return true;
	}
//return false;
}