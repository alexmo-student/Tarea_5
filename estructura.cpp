#include <iostream>
using namespace std;

main(){

	int edad,*p_edad;
	p_edad=&edad;
	cout<<"Ingresar Edad: ";
	cin>>edad;
	cout<<*p_edad<<endl;
	if (*p_edad>18){
		cout<<"Mayor de Edad:"<<endl;
	} else {
		cout<<"Menor de Edad:"<<endl;
	}
	cout<<"---------------------------------------------"<<endl;
	int total =0,*p_notas;
	p_notas = new int  [total];
	char res;
	do{
		cout<<"Ingrese las Notas: "<<total<<":";
		cin>>p_notas[total];
		total++;
		cout<<"Desea Ingresar Otro Valor (s/n): ";
		cin>>res;
	}while(res=='s'|| res =='S');
	cout <<"-------------Mostrar Notas-----------------------"<<endl;
	for (int i=0; i<total; i++){
			cout <<"Nota ("<<i<<"):"<<*p_notas<<endl;
	p_notas++;
		
	}

	
	cout<<"___________________________________________________"<<endl;
	int fil=0, col=0, **pm_notas;
	cout<<"Ingrese la cantidad de Estudiante: ";
	cin>>fil;
	cout<<"Ingrese la cantidad Notas por Estudiante: ";
	cin>>col;
	pm_notas = new int *[fil];
	for(int i=0; i<fil;i++){
		pm_notas[i]= new int[col];
	}
	for (int i=0; i<fil; i++){
		cout<<"______________Estudiante________________"<<i<<endl;
		for(int ii=0; ii<col; ii++){
			cout<<"Nota:"<<ii<<":";
			cin>>*(*(pm_notas+i)+ii);
		}
		cout<<"_____________________________________________"<<endl;
	}

		cout<<"------------Mostrar Notas----------------"<<endl;
			for (int i=0; i<fil; i++){
		for(int ii=0; ii<col; ii++){
			cout<<*(*(pm_notas+i)+ii)<<endl;
		}
		cout<<"------------------------------------"<<endl;
		}
			for(int i=0; i<fil;i++){
				delete [] pm_notas[i];
				
			}
		delete []pm_notas;
	system("pause");
} 
