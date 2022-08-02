#include<iostream>
#include<cmath>
using namespace std;

double PI = 3.14159;

int adding(int a){
	int b;
	for(int i=0; i<a; i++){
		int c;
		cout<<"\n Valor "<<i<<" --> ";
		cin>>c;
		b+=c;
	}
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n                                                                             Suma total: "<<b;
}

int questionAdding(){
	int a;
	cout<<"\n Ingrese cuantos valores sumaras: ";
	cin>>a;
	adding(a);
}

int subtraction(int a){
	int b=0;	
	for(int i=0; i<a; i++){
		int c;
		cout<<"\n Valor "<<i<<" --> ";
		cin>>c;
		if(b==0){
			b=c;
		}else{
			b-=c;
		}
	}
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n                                                                             Resta total: "<<b;
}

int questionSubtraction(){
	int a;
	cout<<"\n Ingrese cuantos valores restaras: ";
	cin>>a;
	subtraction(a);
}

int multiply(int a){
	int b=0;	
	for(int i=0; i<a; i++){
		int c;
		cout<<"\n Valor "<<i<<" --> ";
		cin>>c;
		if(b==0){
			b=c;
		}else{
			b*=c;
		}
	}
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n                                                                             Multiplicacion total: "<<b;
}

int questionMultiply(){
	int a;
	cout<<"\n Ingrese cuantos valores multiplicaras: ";
	cin>>a;
	multiply(a);
}

int division(){
	int a;
	int b;
	cout<<"Numerador: ";
	cin>>a;
	cout<<"\nDenominador: ";
	cin>>b;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n                                                                             Division total: "<<a/b;
}

int powder(){
	double a;
	double b;
	cout<<"Base: ";
	cin>>a;
	cout<<"\nPotencia: ";
	cin>>b;
	double result = pow(a,b);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n                                                                             Resultado: "<<result;
}

int squareRoot(){
	double a;
	cout<<"Nro a sacar raiz: ";
	cin>>a;
	double result = sqrt(a);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n                                                                             Resultado: "<<result;
}

int module(){
	double a,b;
	cout<<"x: ";
	cin>>a;
	cout<<"y: ";
	cin>>b;
	double result = sqrt(pow(a,2)+pow(b,2));
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n                                                                             Resultado: "<<result;
}

int factorial(int n){
	long double factorial = 1.0;
	if(n<0){
		cout<<"No puedes añadir 0";
	}else{
		for(int i=1;i<=n;++i){
			factorial *= i;
		}
	}
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n                                                                             Resultado: "<<factorial;
}

int questionFactorial(){
	int a;
	cout<<"\n Ingrese el factorial: ";
	cin>>a;
	factorial(a);
}

int LogaritmC(double n, double n2){
	double result = (double)(log2(n) / log2(n2));
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n                                                                             Resultado: "<<result;
}

int Logaritm(double n){
	double result = log(n);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n                                                                             Resultado: "<<result;
}

int Logaritm10(double n){
	double result = log10(n);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n                                                                             Resultado: "<<result;
}

int questionLogaritm(){
	int a;
	double n;
	double n2;
	cout<<"\n 1) Factorial ";
	cout<<"\n 2) Factorial (base 10) ";
	cout<<"\n 3) Factorial (base) ";
	cout<<"\n =>  ";
	cin>>a;
	if(a==1){
		cout<<"\n Ingrese el numero: ";
		cin>>n;
		Logaritm(n);
	}else if(a==2){
		cout<<"\n Ingrese el numero: ";
		cin>>n;
		Logaritm10(n);
	}else if(a==3){
		cout<<"\n Ingrese el numero: ";
		cin>>n;
		cout<<"\n Ingrese la base: ";
		cin>>n2;
		LogaritmC(n, n2);
	}else{
		cout<<"\n Opcion invalida: ";
	}
}

int Sen(double n){
	double result = sin(n);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n                                                                             Resultado: "<<result;
}

int questionSen(){
	double a;
	cout<<"\n Ingrese el ángulo: ";
	cin>>a;
	a = a*3.14/180;
	Sen(a);
}

int Cos(double n){
	double result = cos(n);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n                                                                             Resultado: "<<result;
}

int questionCos(){
	double a;
	cout<<"\n Ingrese el ángulo: ";
	cin>>a;
	a = a*3.14/180;
	Cos(a);
}

int Tan(double n){
	double result = tan(n);
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n                                                                             Resultado: "<<result;
}

int questionTan(){
	double a;
	cout<<"\n Ingrese el ángulo: ";
	cin>>a;
	a = a*3.14/180;
	Tan(a);
}
