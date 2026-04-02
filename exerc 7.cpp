#include <iostream>
using namespace std;

int main(int arg, char** argv)
{
	double m;
	double k;
	
	cout <<   "Informe o valor em milhas: ";
	cin >> m;
	
	
	k = (m*1852)/1000;
	
	cout << "O valor em quilometros :" << k;
	
	return 0;
}