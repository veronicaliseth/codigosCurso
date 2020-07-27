/* escriba un programa que lea tres numeros y determine cual de ellos es el mayor*/

#include<iostream>

using namespace std;

int main(){
	float n1,n2,n3;
	
	cout<<"ingrese el primer numero: "; cin>>n1;
	cout<<"ingrese el segundo numero: "; cin>>n2;
	cout<<"ingrese el tercer numero: "; cin>>n3;
	
	if(n1>n2 & n1>n3){
		cout<<"el numero mayor es: "<<n1;
	}
	else if(n2>n1 & n2>n3){
		cout<<"el numero mayor es: "<<n2;
	}
	else if(n3>n1 &n3>n2){
		cout<<"el numero mayor es: "<<n3;
	}
	
	
	
	
	
	return 0;
}
