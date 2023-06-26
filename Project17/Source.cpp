#include <iostream>

using namespace std;


int recursiiv_func(int & i, int temp) {
	i--;
	if (i == 0) {
		return temp;
	}
	else {
	temp *= i;
		recursiiv_func(i, temp);
	}
}

void main() {
	int i = 0;
	cout << "Enter the number whose factorial is needed: ";
	cin >> i;
	int tmp_out = i;

	
		cout << "Factorial "<<tmp_out<< " = " << recursiiv_func(i, i);
}