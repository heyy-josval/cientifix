#include <iostream>
#include <string>
#include <fstream>
#include "adding.cpp"


using namespace std;


int main(){
	ifstream f("logo.txt");
	if(f.is_open())
	cout<<f.rdbuf();
	
	int option;
	cout<<"\n   _____________________________________________________";
	cout<<"\n   ________________SELECCIONE UNA OPCION________________";
	cout<<"\n  |                                                     |";
	cout<<"\n  |    1. Suma                 2. Resta                 |";
	cout<<"\n  |    3. Multiplicacion       4. Division              |";
	cout<<"\n  |    5. Potencia             6. Raiz cuadrada         |";
	cout<<"\n  |    7. Obtener modulo       8. Factorial             |";
	cout<<"\n  |    9. Logaritmo            10. Derivada             |";
	cout<<"\n  |    11. Seno                12. Coseno               |";
	cout<<"\n  |    13. Tangente            14. Cotangente           |";
	cout<<"\n  |    15. Secante             16. Cosecante            |";
	cout<<"\n  |    17. Valor de PI         18. Numero Euler         |";
	cout<<"\n  |    19. Opciones            20. Salir                |";
	cout<<"\n  |                                                     |";
	cout<<"\n  |_____________________________________________________|";
	cout<<"\n   _____________________________________________________";
	cout<<"\n                ________________________                \n\n";
	cout<<"  Opcion Nro: ";
	cin>>option;
	if(option > 0 && option <= 20){
		switch(option){
			case 1:
				questionAdding();
				main();
			case 2:
				questionSubtraction();
				main();
			case 3:
				questionMultiply();
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
				questionFactorial();
				main();
			case 9:
				questionLogaritm();
				main();
			case 11:
				questionSen();
				main();
			case 12:
				questionCos	();
				main();
			case 13:
				questionTan();
				main();
		}
	}else{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nOpcion invalida!!\n\n";
		main();
	}
}
