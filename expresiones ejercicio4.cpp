/*escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final
de los cuatro alumnos*/

#include<iostream>

using namespace std;

int main(){
	float alumno1, alumno2, alumno3, alumno4;
	int notafinalmedia;
	
	cout<<"ingrese la nota del primer alumno: "; cin>>alumno1;
	cout<<"ingrese la nota del segundo alumno: "; cin>>alumno2;
	cout<<"ingrese la nota del trecer alumno: "; cin>>alumno3;
	cout<<"ingrese la nota del cuarto alumno: "; cin>>alumno4;
	
	notafinalmedia = (alumno1+alumno2+alumno3+alumno4)/4;
	
	cout<<"\nLa nota final media de los cuatro alumnos son: "<<notafinalmedia<<endl;
	
	
	
	return 0;
}

