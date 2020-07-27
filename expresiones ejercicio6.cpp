/*escriba un programa que calcule las soluciones de una ecuacion de segundo
 grado de la forma ax^2+bx+c=0, teniendo encuenta que:la formula general */
 
#include<iostream>
#include<math.h>

using namespace std;

int main(){
   float  a,b,c, resultadopositivo = 0, resultadonegativo = 0;
	
	cout<<"ingrese el valor de a: "; cin>>a;
	cout<<"ingrese el valor de b: "; cin>>b;
	cout<<"ingrese el valor de c: "; cin>>c;
	
	resultadopositivo=(-b+sqrt(pow(b,2)-4*a*c))/(2*a); 
	
	resultadonegativo=(-b-sqrt(pow(b,2)-4*a*c))/(2*a) ;
	 
	cout<<"\nEl primer resultado es: "<<resultadopositivo;
	cout<<"\nEl segundo resultado es: "<<resultadonegativo<<endl;
	
	return 0;
}
 
 
 
