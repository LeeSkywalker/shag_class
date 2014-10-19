/*
Задача. Проверка таблицы умножения
Перед пользователем выскакивает сообщение, где он должен выбрать 

сложность. (Это можно сделать через switch)
Сложность влияет на сколько большие числа используются в таблицы 

умножения.
1- простая (от 1 до 3)
2-средняя (от 4-5)
3-сложная (от 7 -10)
После того, как пользователь выбрал сложность. Он отвечает 
последовательно на вопросы (5 штук)
Например: Сколько будет 2 на 2.
Нужно занести в переменные константы. Сколько всего вопросов и сколько 

всего ошибок (сделал пользователь , если отвечал неправильно на 

вопросы).
Формула нахождения случайного числа

num = rand()%(max-min+1)+min;

*/

#include  <iostream>
#include <cstdlib> <!--Подключать , чтобы компилировало не только в VS -->
#include <ctime>


using namespace std;

void main() {
	setlocale(LC_ALL, "russian");
	int level, a = 10, b = 10, c, user;
	int max_value, min_value;
	int const num_question = 5;
	int tru_answer = 0, false_answer = 0;


	srand(time(NULL));
	cout << "Здравствуйте. Это игра. \n Выберите уровень сложности \n 1-легкая \t 2-средняя \t 3-сложная \n";
	cin >> level;

		switch (level){
		case 1: {
					cout << "легкая \n";
					min_value = 1;
					max_value = 3;
					break;
		}
		case 2: {
					cout << "средняя \n";
					min_value = 4;
					max_value = 6;

					break;
		}
		case 3: {
					cout << "сложная \n";
					min_value = 7;
					max_value = 10;

					break;
		}
		}


	for (int i = 0; i < num_question; i++){
		a = rand() % (max_value - min_value + 1) + min_value;
		b = rand() % (max_value - min_value + 1) + min_value;
		c = a*b;

		cout << a << " * " << b << " = ? \n";
		cin >> user;
		if (user == c){
			cout << "Это правильный ответ. \n";
			tru_answer++;
		}
		else {
			cout << "Не верно. \n";
			false_answer++;
		}
			
	}
	cout << "Количество правильных ответов = " << tru_answer << "; \n";
	cout << "Количество ошибок = " << false_answer << "; \n";
	if (tru_answer == num_question) cout << "Вы победили! \n";
	else cout << "Вы проиграли! \n";




}