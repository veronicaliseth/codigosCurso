/* escriba un progrma que lea tres numero y escriba
 cual de ellos es el mayor*/



#include<iostream>

using namespace std;

int main(){

	
	int n1, n2, n3;
	
	cout<<"ingrese 3 numeros ";
	cin>>n1>>n2>>n3; 
	 
	if(n1>n2 & n1>n3){
		cout<<"El numero mayor es: "<<n1;
	}	
	else if(n2>n3){
		cout<<"el numero mayor es: "<<n2;
	}
	else{
		cout<<"el numero mayor es: "<<n3;
	}

	return 0;
	}	
	


