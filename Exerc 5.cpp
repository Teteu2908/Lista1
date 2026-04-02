#include <iostream>
using namespace std;

int main(int arg, char** argv)
{
	double b;
	double a;
	double h;
	
	cout <<   "Informe o primeiro valor: ";
	cin >> b;
	
	cout <<   "Informe o segundo valor: ";
	cin >> h;
	
	a = (b + h)/2;
	
	cout << "O valor da media aritmetico:" << a;
	
	return 0;
}