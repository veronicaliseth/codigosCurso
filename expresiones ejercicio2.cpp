#include<iostream>

using namespace std;

int main(){
	float a,b,c,resultado = 0;
	
	cout<<"ingrese el primer numero: "; cin>>a;
	cout<<"ingrese el segundo numero: "; cin>>b;
	cout<<"ingrese el tercer numero: "; cin>>c;
	
	resultado = a+b/c+b;
	
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	
	return 0;
}
