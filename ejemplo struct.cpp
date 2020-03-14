#include<iostream>

using namespace std;

struct datos{
	
	int id;
	string nombre,apellido;
	int edad;
	char genero;
	
};

int main(){
	
	struct datos d[3];
	for(int i=0; i<3; i++){
		cout<<"Ingrese el id del usuario "<< i+1 <<" : ";
		cin>>d[i].id;
		
		cout<<"Ingrese el nombre del usuario "<< i+1 <<" : ";
		cin>>d[i].nombre;
		
		cout<<"Ingrese el apellido del usuario "<< i+1 <<" : ";
		cin>>d[i].apellido;
		
		cout<<"Ingrese el genero del usuario "<< i+1 <<" : ";
		cin>>d[i].genero;
	    
		cout<<"Ingrese la edad del usuario "<< i+1 <<" : ";
		cin>>d[i].edad;
		cout<<"__________________________________________________\n";
	}
	for(int i=0;i<3;i++){
		int menor=d[0].edad;
		int pos=i;
		for(int j=i+1;j<3;j++){
			if(d[j].edad<menor){
				menor=d[j].edad;
				pos=j;
				cout<<d[i].nombre<<endl;
			 	cout<<d[i].apellido<<endl;
			 	cout<<d[i].id<<endl;
			 	cout<<d[i].genero<<endl;
			 	cout<<d[i].edad<<endl;
			}
	
		}
		if(pos == i){
			int temp=d[i].edad;
			d[i].edad=d[pos].edad;
			d[pos].edad=temp;
		}
	}
 }
