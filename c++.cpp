#include<iostream>
using namespace std;
int numero1,numero2;	
int suma;

int main(){
	
	cout<<"BIENVENIDO A COMPILADORES!\n";
	
	cout<<"-----------------------------------------------"<<endl;
	
	cout<<"BIENVENIDO ";
	cout<<"A COMPILADORES!\n";
	
	cout<<"-----------------------------------------------"<<endl;
	
	cout<<"BIENVENIDO\nA\n\nCOMPILADORES!\n";
	
	
		cout<<"-----------------------------------------------"<<endl;
	cout<<"SUMA DE DOS ENTEROS"<<endl;
	cout<<"ingrese el valor del primer entero: ";
	cin>>numero1;
	cout<<"ingrese el valor del segundo entero: ";
	cin>>numero2;
	
	suma=numero1+numero2;
	
	cout<<"la suma de los enteros es: "<<suma<<endl;
	
	cout<<"-----------------------------------------------"<<endl;
	cout<<"COMPARACION DE ENTEROS"<<endl;
	cout<<"Ingrese el primer entero: ";
	cin>>numero1;
	cout<<"Ingrese el segundo entero: ";
	cin>>numero2;
	
		if(numero1 == numero2){
		cout<<"Los enteros son iguales"<<endl;}


	    if(numero1 != numero2){
		cout<<"Los enteros son diferentes"<<endl;}
	
        if(numero1 > numero2){
		cout<<"El primer entero es mayor al segundo"<<endl;}
	

        if(numero1 < numero2){
		cout<<"El segundo entero es mayor al primero"<<endl;}
		
		if(numero1 >= numero2){
     	cout<<"El primer entero es mayor igual al segundo"<<endl;}
		
     	if(numero1 <= numero2){
     	cout<<"El primer entero es menor igual segundo"<<endl;}
				
		return 0;
				
	  }              
