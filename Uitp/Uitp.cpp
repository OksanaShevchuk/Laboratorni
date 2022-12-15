#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	double a, b;
	double y;
	double n;
	cout << "Лабораторна 2 ";
	cout << "  Введіть значення a,b,n:" << endl;
	cout << "\ta=";
	cin >> a;
	cout << "\tb=";
	cin >> b;
	cout << "\tn=";
	cin >> n;
	y = (exp(a * n) + b) * (0.25 * (pow(log(a * n), 2)));


	cout << "Результа=" << y << endl;
	cout << "   \n ";
	getchar();
	system("pause");
	return 0;

}
