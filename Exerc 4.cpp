#include <iostream>
using namespace std;

int main(int arg, char** argv)
{
	double b;
	double a;
	double h;
	
	cout <<   "Informe o valor da base do triangulo: ";
	cin >> b;
	
	cout <<   "Informe o valor da altura do triangulo: ";
	cin >> h;
	
	a = (b * h)/2;
	
	cout << "A area do triangulo calculada é:" << a;
	
	return 0;
}