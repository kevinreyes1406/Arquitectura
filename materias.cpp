#include <iostream>
#define n 2
using namespace std;

struct datos{
	string nombre;
	int semestre;
	int creditos;
};
main(){
	int semestreAct,creditosAct,sum;
	int salir;
	struct datos materia[n];
	for(int i=0;i<n;i++){
		cout<<"Nombre de la materia "<<i+1<<" : ";
		cin>>materia[i].nombre;
		cout<<"Semestre de la materia "<<i+1<<" : ";
		cin>>materia[i].semestre;
		cout<<"Creditos de la materia "<<i+1<<" : ";
		cin>>materia[i].creditos;
		cout<<"______________________________________"<<endl;
	}
	do{
	sum=0;
	cout<<"En que semestre estas"<<endl;
	cin>>semestreAct;
	cout<<"Cuantos creditos tiene"<<endl;
	cin>>creditosAct;
	cout<<"Opcion 1"<<endl;
	for(int i=0;i<n;i++){
		if(materia[i].semestre==semestreAct){
			sum=sum+materia[i].creditos;
			if(sum<=creditosAct){
				cout<<"Materia: "+materia[i].nombre<<endl;
			}else if(sum>creditosAct){
				sum=sum-materia[i].creditos;
			}
		}
	}
	cout<<"___________________________________________"<<endl;
	sum=0;
	cout<<"Opcion 2"<<endl;
	for(int i=n;i>=0;i--){
		if(materia[i].semestre==semestreAct){
			sum=sum+materia[i].creditos;
			if(sum<=creditosAct){
				cout<<"Materia: "+materia[i].nombre<<endl;
			}else if(sum>creditosAct){
				sum=sum-materia[i].creditos;
			}
		}
 }
	cout<<"___________________________________________"<<endl;
	cout<<"salir? si=1/no=2"<<endl;
	cin>>salir;
	}while(salir!=1);
}
