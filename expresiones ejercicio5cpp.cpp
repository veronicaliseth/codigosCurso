/*escriba un programa que lea de la entrada estandar de los catetos de un triangulo 
rectangulo y escriba en la salida estandar su hipotenusa*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float cateto1,cateto2, hipotenusa =0;
	
	cout<<"ingrese el cateto1 del triangulo: "; cin>>cateto1;
	cout<<"ingrese el cateto2 del triangulo: "; cin>>cateto2;
	
    hipotenusa = sqrt(pow(cateto1,2)+(cateto2,2));
	

	cout<<"\nLa hipotenusa del triandulo es: "<<hipotenusa<<endl;
	
	return 0;
}
