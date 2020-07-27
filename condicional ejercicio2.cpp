/* comprobar si un numero digitado por el usuario ess positivo o negativo*/

#include<iostream>

using namespace std;

int main(){
	float numero;
	cout<<"ingrese un numero: "; cin>>numero;
	
	if(numero < 0){
		cout<<"el numero: "<<numero<<" es negativo";
	}
	else if(numero > 0){
		cout<<"el numero: "<<numero<<" es positivo";
	}
	
	
	
	
	return 0;
}
