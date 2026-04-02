#include <iostream>
#include <cmath>
using namespace std;

int main(int arg, char** argv)
{
	int b;
    int a;
	int c;
	double d;
	
	cout <<   "Informe o primeiro valor: ";
	cin >> b;
	
	cout <<   "Informe o segundo valor: ";
	cin >> c;
	
	a = (b * c);
	
	d = sqrt(a);
	
	cout << "O valor da media geometrica:" << d;
	
	return 0;
}