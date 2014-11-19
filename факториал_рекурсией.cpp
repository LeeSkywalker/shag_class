#include <iostream>

using namespace std;

int factR(int N){
	if (N == 0){
		return 1;
	}
	return N * factR(N - 1);
}

int main(){
	cout << factR(3) << "\n";
	return 0;
}