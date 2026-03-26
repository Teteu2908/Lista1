#include <iostream>
using namespace std;

int main(int arg, char** argv)
{
	int b;
	int h;
	
	cout <<   "Informe a o valor da aresta do quadro: ";
	cin >> b;
	
	h = b * b;
	
	cout << "A area do quadrado calculada é:" << h;
	
	return 0;

}