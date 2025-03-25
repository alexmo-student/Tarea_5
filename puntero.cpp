#include <iostream>
using namespace std;

main (){
	
	int edad= 25,*p_edad;
	p_edad =&edad;
	
	 cout <<"Edad: "<<edad<<endl;
	 cout<<"Puntero Edad:"<<*p_edad<<endl;
	 
	 
	 cout<<"________Cambio de Valores__________:"<<endl;
	 
	 *p_edad=100;
	 
	 cout <<"Edad: "<<edad<<endl;
	 cout<<"Puntero Edad:"<<*p_edad<<endl;
	 
	 	 cout<<"________otro Valor para p_edad__________:"<<endl;
	 	 int edad2=200;
	 
	 p_edad=&edad2;
	 
	 cout <<"Edad: "<<edad<<endl;
	 cout<<"Puntero Edad:"<<*p_edad<<endl;
	 cout <<"Edad: "<<edad2<<endl;
	 
	 
	 system("pause");
}
