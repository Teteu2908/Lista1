#include <iostream>
using namespace std;

int main(int arg, char** argv)
{
	double d;
	double r;
	double c;
	
	cout <<   "Informe o valor em dolar: ";
	cin >> d;
	
	cout <<   "Informe a cotacao do dolar: ";
	cin >> c;
	
	r = c*d;
	
	cout << "O valor em reais:" << r;
	
	return 0;
}