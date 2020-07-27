#include<iostream>

using namespace std;

int main(){
	int precioproducto, iva;
	cout<<"ingrese el precio de un producto: ";
	
	cin>>precioproducto;
    iva= precioproducto*0.16 + precioproducto;
    
	cout<<"\nEl precio del producto con IVA es: "<<iva;
	
	
	
	return 0;
}
