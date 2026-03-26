#include <iostream>
using namespace std;

int main(int arg, char** argv)
{
	double b;
	double a;
	
	cout <<   "Informe o valor da diagonal do quadrado: ";
	cin >> b;
	
	a = (b * b)/2;
	
	cout << "A area do quadrado calculada é:" << a;
	
	return 0;

}