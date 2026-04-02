#include <iostream>
using namespace std;

int main(int arg, char** argv)
{
	double d;
	double a;
	
	cout <<   "Informe o valor do diametro: ";
	cin >> d;
	
	
	a = 3.14*(d*d)/4;
	
	cout << "O valor em quilometros :" << a;
	
	return 0;
}