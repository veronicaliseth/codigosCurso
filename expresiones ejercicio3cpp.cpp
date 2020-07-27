#include<iostream>

using namespace std;

int main(){
	float a, b, c, resultado=0;
	
	cout<<"ingrese el valor a: "; cin>>a;
	cout<<"ingrese el valor b: "; cin>>b;
	cout<<"ingrese el valor c: "; cin>>c;
	
	resultado = a + (b /(c-b));
	
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	
	
	
	return 0;
}
