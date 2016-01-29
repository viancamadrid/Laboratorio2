#include <iostream>
#include <cmath>

using std:: cout;
using std::cin;
using std::endl;

double euler(int n);
int factorial(int num);

int main (int argc, char*argv[]){
	int op;
	cout<<" 1. Ejercicio 1\n 2. Ejercicio 2\n Ingrese Opcion: ";
	cin>>op;
	if(op==1){
		int  x;
		double e;
        	cout<<"Ingrese x: ";
        	cin>>x;
		e=euler(x)*1.0;
		cout<<"e^"<<x<<" = "<<e<<endl;
        }
	if(op==2){
						
	} 
	return 0;
}

double euler(int n){
	double calculo=0.0;
        double fac;
        for (int i=0; i<=15; i++){
                if (i==0){
			fac=1;
		}else{
			fac=factorial(i);				
        	}
		calculo+=((pow (n,i))/fac);
		//cout << calculo << endl;
	}
	return calculo;

}

int factorial (int num){
	int c=1;
	for (int i=1; i<=num; i++){
		c*=i;
	}
	return c;
}


