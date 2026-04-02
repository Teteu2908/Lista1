#include <iostream>
using namespace std;

int main(int arg, char** argv)
{
	double c;
	double f;
	
	cout <<   "Informe o valor em celsius: ";
	cin >> c;
	
	
	f = (c*9/5)+32;
	
	cout << "O valor em fahrenheit:" << f;
	
	return 0;
}