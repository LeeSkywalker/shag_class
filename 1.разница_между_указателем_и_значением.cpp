/*1) ������� ����� ���������� � ���������*/
#include <iostream>

using namespace std;
#define SIZE 4
int main(){
	setlocale(LC_ALL, "russian");

	int arr[SIZE] = { 1, 2, 3, 4 };


	cout << "����� ��������� = ";
	cout << arr << "\n";
	cout << *arr << "\n";

	return 0;
}