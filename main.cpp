#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

//
//					FUNCIONES DE LAS OPERACIONES
//

int adding()
{
	int a, b;
	cout << "\n Ingrese cuantos valores sumaras: ";
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int c;
		cout << "\n Valor " << i << " --> ";
		cin >> c;
		b += c;
	}
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Suma total: " << b;
}

int subtraction()
{
	int a, b = 0;
	cout << "\n Ingrese cuantos valores restaras: ";
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int c;
		cout << "\n Valor " << i << " --> ";
		cin >> c;
		if (b == 0)
		{
			b = c;
		}
		else
		{
			b -= c;
		}
	}
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Resta total: " << b;
}

int multiply()
{
	int a, b = 0;
	cout << "\n Ingrese cuantos valores multiplicaras: ";
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int c;
		cout << "\n Valor " << i << " --> ";
		cin >> c;
		if (b == 0)
		{
			b = c;
		}
		else
		{
			b *= c;
		}
	}
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Multiplicacion total: " << b;
}

int division()
{
	int a;
	int b;
	cout << "Numerador: ";
	cin >> a;
	cout << "\nDenominador: ";
	cin >> b;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Division total: " << a / b;
}

int powder()
{
	double a;
	double b;
	cout << "Base: ";
	cin >> a;
	cout << "\nPotencia: ";
	cin >> b;
	double result = pow(a, b);
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Resultado: " << result;
}

int squareRoot()
{
	double a;
	cout << "Nro a sacar raiz: ";
	cin >> a;
	double result = sqrt(a);
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Resultado: " << result;
}

int module()
{
	double a, b;
	cout << "x: ";
	cin >> a;
	cout << "y: ";
	cin >> b;
	double result = sqrt(pow(a, 2) + pow(b, 2));
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Resultado: " << result;
}

int factorial()
{
	int n;
	long double factorial = 1.0;
	cout << "\n Ingrese el factorial: ";
	cin >> n;
	if (n < 0)
	{
		cout << "No puedes añadir 0";
	}
	else
	{
		for (int i = 1; i <= n; ++i)
		{
			factorial *= i;
		}
	}
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Resultado: " << factorial;
}

int LogaritmC(double n, double n2)
{
	double result = (double)(log2(n) / log2(n2));
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Resultado: " << result;
}

int Logaritm(double n)
{
	double result = log(n);
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Resultado: " << result;
}

int Logaritm10(double n)
{
	double result = log10(n);
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Resultado: " << result;
}

int questionLogaritm()
{
	int a;
	double n;
	double n2;
	cout << "\n 1) Factorial ";
	cout << "\n 2) Factorial (base 10) ";
	cout << "\n 3) Factorial (base) ";
	cout << "\n =>  ";
	cin >> a;
	if (a == 1)
	{
		cout << "\n Ingrese el numero: ";
		cin >> n;
		Logaritm(n);
	}
	else if (a == 2)
	{
		cout << "\n Ingrese el numero: ";
		cin >> n;
		Logaritm10(n);
	}
	else if (a == 3)
	{
		cout << "\n Ingrese el numero: ";
		cin >> n;
		cout << "\n Ingrese la base: ";
		cin >> n2;
		LogaritmC(n, n2);
	}
	else
	{
		cout << "\n Opcion invalida: ";
	}
}

int Sen()
{
	double n;
	cout << "\n Ingrese el ángulo: ";
	cin >> n;
	n = n * 3.14 / 180;
	double result = sin(n);
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Resultado: " << result;
}

int Cos()
{
	double n;
	cout << "\n Ingrese el ángulo: ";
	cin >> n;
	n = n * 3.14 / 180;
	double result = cos(n);
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Resultado: " << result;
}

int Tan()
{
	double n;
	cout << "\n Ingrese el ángulo: ";
	cin >> n;
	n = n * 3.14 / 180;
	double result = tan(n);
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Resultado: " << result;
}

int Cotan()
{
	double n;
	cout << "\n Ingrese el ángulo: ";
	cin >> n;
	n = n * 3.14 / 180;
	double result = 1 / (tan(n));
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Resultado: " << result;
}

int Sec()
{
	double n;
	cout << "\n Ingrese el ángulo: ";
	cin >> n;
	n = n * 3.14 / 180;
	double result = 1 / (cos(n));
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Resultado: " << result;
}

int Csc()
{
	double n;
	cout << "\n Ingrese el ángulo: ";
	cin >> n;
	n = n * 3.14 / 180;
	double result = 1 / (sin(n));
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Resultado: " << result;
}

int derivate()
{
	int opc, val_n, derivada, cnstante;
	cout << "#### MENU ####" << endl;
	cout << "OPCION N1 f(x) ln(x)" << endl;
	cout << "OPCION N2 f(x) (x)^n" << endl;
	cout << "OPCION N3 f(x) sen(x)" << endl;
	cout << "OPCION N4 f(x) cos(x)" << endl;
	cout << "OPCION N5 f(x) e^(x)" << endl;
	cout << "OPCION N6 f(x) a(x)" << endl;
	cout << "OPCION N7 f(x) a cot(x)" << endl;
	cout << "\nSeleciona la opcion que quieres: ";
	cin >> opc;
	switch (opc)
	{
	case 1:
	{
		cout << "\nIngrese el valor de una constante: " << endl;
		cout << "\nconstante: ";
		cin >> cnstante;
		cout << "\nLa derivada es: " << cnstante << "/x" << endl;
		break;
	}
	case 2:
	{
		cout << "\nIngrese el valor para una constante y el valor para n: " << endl;
		cout << "\nconstante: ";
		cin >> cnstante;
		cout << "\nvalor_n: ";
		cin >> val_n;
		cout << "\n La derivada es: " << cnstante * val_n << "(x)^" << val_n - 1 << endl;
		break;
	}
	case 3:
	{
		cout << "\nIngrese el valor para una constante: " << endl;
		cout << "\nconstante: ";
		cin >> cnstante;
		cout << "\n La derivada es: " << cnstante << "cos(x)" << endl;
		break;
	}
	case 4:
	{
		cout << "\nIngrese el valor para una constante: " << endl;
		cout << "\nconstante: ";
		cin >> cnstante;
		cout << "\n La derivada es: "
				 << "-" << cnstante << "sen(x)" << endl;
		break;
	}
	case 5:
	{
		cout << "\nIngrese el valor para una constante y el valor para n: " << endl;
		cout << "\nLa derivada es: "
				 << "e"
				 << "^(x)";
		break;
	}
	case 6:
	{
		cout << "\nIngrese el valor para una constante: " << endl;
		cout << "\nconstante: ";
		cin >> cnstante;
		cout << "\nLa derivada es: " << cnstante << endl;
		break;
	}
	case 7:
	{
		cout << "\nIngrese el valor para una constante: " << endl;
		cout << "\nconstante: ";
		cin >> cnstante;
		cout << "\nLa derivada es: "
				 << "-" << cnstante << "*"
				 << "csc^2*" << cnstante << "(x)" << endl;
		break;
	}
	}
	return 0;
}

int PI()
{
	double pi = 2 * asin(1.0);
	int n;
	cout << "\n\n\n (1) - Mostrar el valor de PI ";
	cout << "\n (2) - Multiplicar un entero por PI ";
	cout << "\n (3) - Multiplicar un decimal por PI ";
	cout << "\n\n Opcion: ";
	cin >> n;

	if (n < 4 && n > 0)
	{
		switch (n)
		{
		case 1:
			cout << "\n\n El valor de PI es " << pi;
			return 0;
		case 2:
			int e1;
			cout << "\n Introduce el entero a multiplicar: ";
			cin >> e1;
			cout << "\n\n El resultado es " << e1 * pi;
			return 0;
		case 3:
			double e2;
			cout << "\n Introduce el decimal a multiplicar: ";
			cin >> e2;
			cout << "\n\n El resultado es " << e2 * pi;
			return 0;
		}
	}
	else
	{
		cout << "\n\n\n\n Opcion invalida \n\n";
		PI();
	}
}

int Euler()
{
	double a;
	cout << "Nro a convertir en Euler: ";
	cin >> a;
	double result = exp(a);
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n                                                                             Resultado: " << result;
}

int options()
{
	int n;
	cout << "\n ----- COLORES DE TEXTO ----- ";
	cout << "\n\n - (1) Azul ";
	cout << "\n - (2) Verde ";
	cout << "\n - (3) Celeste ";
	cout << "\n - (4) Red ";
	cout << "\n - (5) Purpúra ";
	cout << "\n - (6) Amarillo ";
	cout << "\n - (7) Blanco ";
	cout << "\n - (8) Gris ";
	cout << "\n\n - (9) Azul claro ";
	cout << "\n - (10) Verde claro ";
	cout << "\n - (11) Celeste claro ";
	cout << "\n - (12) Rojo claro ";
	cout << "\n - (13) Purpúra claro ";
	cout << "\n - (14) Amarillo claro ";
	cout << "\n\n - (15) Volver al menu principal ";
	cout << "\n\n Opcion: ";
	cin >> n;
	if (n < 16 && n > 0)
	{
		switch (n)
		{
		case 1:
			system(" color 1 ");
			return 0;
		case 2:
			system(" color 2 ");
			return 0;
		case 3:
			system(" color 3 ");
			return 0;
		case 4:
			system(" color 4 ");
			return 0;
		case 5:
			system(" color 5 ");
			return 0;
		case 6:
			system(" color 6 ");
			return 0;
		case 7:
			system(" color 7 ");
			return 0;
		case 8:
			system(" color 8 ");
			return 0;
		case 9:
			system(" color 9 ");
			return 0;
		case 10:
			system(" color a ");
			return 0;
		case 11:
			system(" color b ");
			return 0;
		case 12:
			system(" color c ");
			return 0;
		case 13:
			system(" color d ");
			return 0;
		case 14:
			system(" color e ");
			return 0;
		case 15:
			return 0;
		}
	}
	else
	{
		cout << "\n\n\n\n Opcion invalida \n\n";
		options();
	}
}

//
//					INTERFAZ PRINCIPAL
//

int main()
{
	ifstream f("logo.txt");
	if (f.is_open())
	{
		cout << f.rdbuf();
	}

	int option;
	cout << "\n   _____________________________________________________";
	cout << "\n   ________________SELECCIONE UNA OPCION________________";
	cout << "\n  |                                                     |";
	cout << "\n  |    1. Suma                 2. Resta                 |";
	cout << "\n  |    3. Multiplicacion       4. Division              |";
	cout << "\n  |    5. Potencia             6. Raiz cuadrada         |";
	cout << "\n  |    7. Obtener modulo       8. Factorial             |";
	cout << "\n  |    9. Logaritmo            10. Derivada             |";
	cout << "\n  |    11. Seno                12. Coseno               |";
	cout << "\n  |    13. Tangente            14. Cotangente           |";
	cout << "\n  |    15. Secante             16. Cosecante            |";
	cout << "\n  |    17. Valor de PI         18. Numero Euler         |";
	cout << "\n  |    19. Opciones            20. Salir                |";
	cout << "\n  |                                                     |";
	cout << "\n  |_____________________________________________________|";
	cout << "\n   _____________________________________________________";
	cout << "\n                ________________________                \n\n";
	cout << "  Opcion Nro: ";
	cin >> option;
	if (option > 0 && option <= 20)
	{
		switch (option)
		{
		case 1:
			adding();
			main();
		case 2:
			subtraction();
			main();
		case 3:
			multiply();
			main();
		case 4:
			division();
			main();
		case 5:
			powder();
			main();
		case 6:
			squareRoot();
			main();
		case 7:
			module();
			main();
		case 8:
			factorial();
			main();
		case 9:
			questionLogaritm();
			main();
		case 10:
			derivate();
			main();
		case 11:
			Sen();
			main();
		case 12:
			Cos();
			main();
		case 13:
			Tan();
			main();
		case 14:
			Cotan();
			main();
		case 15:
			Sec();
			main();
		case 16:
			Csc();
			main();
		case 17:
			PI();
			main();
		case 18:
			Euler();
			main();
		case 19:
			options();
			main();
		case 20:
			return 0;
		}
	}
	else
	{
		cout << "\n\n\n\nOpcion invalida!!\n\n";
		main();
	}
}