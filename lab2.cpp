#include <iostream>
#include <cmath>

using std:: cout;
using std::cin;
using std::endl;

double euler(int n);
int factorial(int num);
double lados (double x1, double x2, double y1, double y2);
double perimetro (double lado1, double lado2, double lado3);
double alta (double a, double b, double c, double s);
double altb (double a, double b, double c, double s);
double altc (double a, double b, double c, double s);
double area (double altura, double base);

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
		double x1, x2, x3, x4, y1, y2, y3, y4;
		bool avanzar=true;
		cout<<"Ingrese x1: ";
		cin>>x1;
		cout<<"Ingrese y1: ";
                cin>>y1;
		cout<<"Ingrese x2: ";
                cin>>x2;
		cout<<"Ingrese y2: ";
                cin>>y2;
		cout<<"Ingrese x3: ";
                cin>>x3;
		cout<<"Ingrese y3: ";
                cin>>y3;
		cout<<"Ingrese x4: ";
                cin>>x4;
		cout<<"Ingrese y4: ";
                cin>>y4;
		if( (x1==x2 && x2==x3) || (x1==x2 && x2==x4) || (x1==x3 && x3==x4)){
			avanzar=false;
		}
		if( (x2==x3 && x3==x4) || (x2==x1 && x1==x3) || (x2==x4 && x4==x1)){
                	avanzar=false;
                }
		if( (x3==x4 && x4==x2) || (x3==x2 && x2==x4) || (x3==x1 && x1==x2)){
                        avanzar=false;
                }
		if( (x4==x1 && x1==x2) || (x4==x1 && x1==x3) || (x4==x2 && x2==x1)){
                        avanzar=false;
                }
		if( (y1==y2 && y2==y3) || (y1==y2 && y2==y4) || (y1==y3 && y3==y4)){
                        avanzar=false;
                }
                if( (y2==y3 && y3==y4) || (y2==y1 && y1==y3) || (y2==y4 && y4==y1)){
                        avanzar=false;
                }       
                if( (y3==y4 && y4==y2) || (y3==y2 && y2==y4) || (y3==y1 && y1==y2)){
                        avanzar=false;
                }
                if( (y4==y1 && y1==y2) || (y4==y1 && y1==y3) || (y4==y2 && y2==y1)){
                        avanzar=false;
                }
		//-----------------------------------------------
		
		if(avanzar){
			double d1, d2, d3, d4, t1l1, t1l2, t1l3, t2l1, t2l2, t2l3;	
			d1=lados(x1, x2, y1, y2);
			d2=lados(x2, x3, y2, y3);
			d3=lados(x3, x4, y3, y4);
			d4=lados(x4, x1, y4, y1);
			cout<<"\nLos puntos son:"<<endl;
			cout<<"("<<x1<<","<<y1<<")"<<endl;
			cout<<"("<<x2<<","<<y2<<")"<<endl;
			cout<<"("<<x3<<","<<y3<<")"<<endl;
			cout<<"("<<x4<<","<<y4<<")"<<endl;
			cout<<"\nLos lados del trapezoide miden: "<<endl;
			cout<<"Lado 1: "<<d1<<endl;
			cout<<"Lado 2: "<<d2<<endl; 
			cout<<"Lado 3: "<<d3<<endl; 
			cout<<"Lado 4: "<<d4<<endl;
			cout<<"\nLos lados del triangulo 1 miden: "<<endl;
			t1l1=lados(x1, x2, y1, y2);
                        t1l2=lados(x2, x4, y2, y4);
                        t1l3=lados(x4, x1, y4, y1);
			t2l1=lados(x2, x3, y2, y3);
                        t2l2=lados(x3, x4, y3, y4);
                        t2l3=lados(x4, x2, y4, y2);
			cout<<"Lado 1: "<<t1l1<<endl;
                        cout<<"Lado 2: "<<t1l2<<endl;
                        cout<<"Lado 3: "<<t1l3<<endl;
			cout<<"\nLos lados del triangulo 2 miden: "<<endl;
			cout<<"Lado 1: "<<t2l1<<endl;
                        cout<<"Lado 2: "<<t2l2<<endl;
                        cout<<"Lado 3: "<<t2l3<<endl;
			double p1, p2, s1, s2;
			p1=perimetro(t1l1, t1l2, t1l3);
			p2=perimetro(t2l1, t2l2, t2l3);
			s1=p1/2;
			s2=p2/2;
			cout<<"\nSemiperimetro Triangulo 1: "<<s1<<endl;
			cout<<"\nSemiperimetro Triangulo 2: "<<s2<<endl;
			cout<<"\nPerimetro Triangulo 1: "<<p1<<endl;
			cout<<"\nSemiperimetro Triangulo 2: "<<p2<<endl;  				
			double  h11, h21, h31, hh21, h22, h23;
			h11=alta(t1l1, t1l2, t1l3, s1);
			h21=altb(t1l1, t1l2, t1l3, s1);
			h31=altc(t1l1, t1l2, t1l3, s1);
			hh21=alta(t2l1, t2l2, t2l3, s2);	
			h22=altb(t2l1, t2l2, t2l3, s2);
			h23=altc(t2l1, t2l2, t2l3, s2);
			cout<<"\nLas alturas del trianglo 1 miden: "<<endl;
			cout<<"Altura 1: "<<h11<<endl;
			cout<<"Altura 2: "<<h21<<endl;
			cout<<"Altura 3: "<<h31<<endl;
			cout<<"\nLas alturas del trianglo 2 miden: "<<endl;
                        cout<<"Altura 1: "<<hh21<<endl;
                        cout<<"Altura 2: "<<h22<<endl;
                        cout<<"Altura 3: "<<h23<<endl;
			double area1, area2, at;
			area1=area(t1l3,h21);
			area2=area(t2l1,h23);
			at=area1+area2;
			cout<<"\nEl area del trapezoide es: "<<at<<endl;	
		}else{
			cout<<"Los puntos estan en una misma linea, ingrese otros"<<endl;				

		}										
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

double lados (double x1, double x2, double y1, double y2){
	double dist;
	dist=sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
	return dist;
}

double perimetro (double lado1, double lado2, double lado3){
	double per;
	per=lado1+lado2+lado3;
	return per;
}

double alta (double a, double b, double c, double s){
	double alt1;
	alt1=(2/a)*sqrt(s*(s-a)*(s-b)*(s-c));
	return alt1;
}

double altb (double a, double b, double c, double s){
        double alt2;
        alt2=(2/b)*sqrt(s*(s-a)*(s-b)*(s-c));
        return alt2;
}

double altc (double a, double b, double c, double s){
        double alt3;
        alt3=(2/c)*sqrt(s*(s-a)*(s-b)*(s-c));
        return alt3;
}

double area (double altura, double base){
	double ar;
	ar=(altura*base)/2;
	return ar;
}

