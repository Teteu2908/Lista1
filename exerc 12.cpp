#include <iostream>
using namespace std;

int main(int arg, char** argv)
{
	double a;
	double b;
	double c;
    double d;
   	double e;
   	double t;
   	double r;
   	double p;
   	
	cout <<   "Informe o valor do primeiro produto: ";
	cin >> a;
	
	cout <<   "Informe o valor do segundo produto: ";
	cin >> b;
	
	cout <<   "Informe o valor do terceiro produto: ";
	cin >> c;
	
	cout <<   "Informe o valor do quarto produto: ";
	cin >> d;
	
	cout <<   "Informe o valor do quinto produto: ";
	cin >> e;
	
	t = a+b+c+d+e;
	
	cout <<   "Informe o valor pago: ";
	cin >> p;
	
	r = p-t;
	
	cout << "O valor total:" << t;
	
	cout << "O valor do troco:" << r;
	
	return 0;
}