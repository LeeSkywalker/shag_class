#include <iostream>

using namespace std;

void main(){
	int rub, usd = 40, eur = 50, operation = 0;
	while (operation != 3)
	{
		cout << "\t Enter your currency: \n 1 for converting to USD, 2 for converting to EUR, 3 for Exit" << endl;
		cin >> operation;
		if (operation == 3) break;
		cout << "Enter rub: ";
		cin >> rub;

		if (operation == 1)
		{				
			rub *= usd;
			cout << rub << endl;
		}
		else
		if (operation == 2)
		{			
			rub *= eur;
			cout << eur << endl;
		}
	}
}