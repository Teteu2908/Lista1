#include <iostream>
#include <math.h>
using namespace std;

int main(int arg, char** argv)
{
    double x;
	double y;
	double a;
	
	cout <<   "Informe o valor de x: ";
	cin >> x;
	
	cout <<   "Informe o valor de y: ";
	cin >> y;
	
	a = pow(x,y);
	
	
	cout << "O valor da media geometrica:" << a;
	
	return 0;
}