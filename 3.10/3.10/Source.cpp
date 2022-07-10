#include<iostream>
using namespace std;
void main() 
{
	/// Compararea a doua numere
	int a;
	int b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	if (a < b)
	{
		cout << "a este mai mic decat b" << endl;
		cout << "a=" << a << " " << "b=" << b << endl;
	}
	else
	{
		cout << "a este mai mare decat b" << endl;
		cout << "a=" << a << " " << "b=" << b << endl;
	}

	//If imbricat
	int nota;
	cout << "nota elevului este ";
	cin >> nota;
	if (nota < 5)
	{
		cout << "repetent";
	}
	else {
		if (nota >= 5 && nota <= 9)
		{
			cout << "bun";
		}
		else {
			cout << "premiant";
		}
	}
	
	//Compararea a trei numere si identificarea maximului
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
		cout << "maxim este " << a;
	}
	else {
		if (a <= b && b >= c)
		{
			cout << "maxim este " << b;
		}
		else
		{
			if (c >= a && c >= b)
			{
				cout << "maxim este " << c;
			}
		}
	}
	
	// Interschimbarea a doua numere
	int a;
	int b;
	cin >> a >> b; 
	int aux;
	aux = b;
	b = a;
	a = aux;
	cout << "a=" << a << " " << "b=" << b << endl;

	// Deplasare la dreapta (schimbarea unor valori intre ele)
	int a;
	int b;
	int c;
	int aux;
	cin >> a >> b >> c;
	aux = c;
	c = b;
	b = a;
	a = aux;
	cout << "a=" << a << " " << "b=" << b << " " << "c=" << c << endl;

	//Verificare daca un nr este pozitiv sau negativ
	int a;
	cin >> a;
	if (a > 0)
	{
		cout << "pozitiv";
	}
	if (a < 0)
	{
		cout << "negativ";
	}
	if (a == 0)
	{
		cout << "invalid";
	}

	//Verificare numar par
	int a;
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "par";
	}
	else
	{
		cout << "impar";
	}




	///Ex 1 
	/// Utilizarea unui singur if si luarea in calcul a variantei in care cele doua sunt egale
	int a;
	int b;
	cin >> a >> b;
	if (a < b)
	{
		cout << "minimul este " << a;
	}
	if (b < a)
	{
		cout << "minimul este " << b;
	}

	///Ex 2
	///Refacerea exercitiului cu variabila auxiliara
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	if (a <= b && a <= c)
	{
		cout << "minimul este " << a;
	}
	else {
		if (b <= c)
		{
			cout << "minimul este " << b;
		}
		else 
			{
				cout << "minimul este " << c;
			}
		}

	///Ex 3
	int a;
	int b;
	cin >> a >> b;
	int aux;
	aux = a;
	a = b;
	b = aux;
	cout << "a=" << a << " " << "b=" << b << endl;

	/// Ex 4 (I)	
	int a;
	int b;
	int c;
	int d;
	int aux;
	cin >> a >> b >> c >> d;
	aux = d;
	d = c;
	c = b;
	b = a;
	a = aux;
	cout << "a=" << a << " " << "b=" << b << " " << "c=" << c << " " << "d=" << d << endl;

	///Ex 4 (II)
	int a;
	int b;
	int c;
	int d;
	int aux;
	cin >> a >> b >> c >> d;
	aux = c;
	c = d;
	d = a;
	a = b;
	b = d;
	d = aux;
	cout << "a=" << a << " " << "b=" << b << " " << "c=" << c << " " << "d=" << d << endl;

	///Ex5
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	if (a % 2 == 0)
	{
		b = b + a * 2;
		c = c + a;
		cout << "b=" << b << " " << "c=" << c << endl;
	}
	else
	{
		b = a + c;
		c = c * 2 + a;
		cout << "b=" << b << " " << "c=" << c << endl;
	}

	///Ex 6
	int a;
	cin >> a;
	int b;
	b = a % 10;  ///Extragerea ultimei cifre dintr-un numar
	if (b % 2 == 0)
	{
		cout << "par";
	}
	else
	{
		cout << "impar";
	}
	if (b > 5)
	{
		cout << true;
	}
	else
	{
		cout << false;
	}

	
	
	








	


	








}