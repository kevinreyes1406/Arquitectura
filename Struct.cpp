
#include<iostream>


using namespace std;

struct datos{
	
	int codigo;
	string nombre,apellido;
	short semestre;
	
	
};


int main(){
	
	struct datos d[10];
	
	
	for(int i=0; i<10 ; i++){
		
		cout<<"Ingrese el codigo del usuario "<< i+1 <<" : ";
		cin>>d[i].codigo;
		
		cout<<"Ingrese el nombre del usuario "<< i+1 <<" : ";
		cin>>d[i].nombre;
		
		cout<<"Ingrese el apellido del usuario "<< i+1 <<" : ";
		cin>>d[i].apellido;
		
		cout<<"Ingrese el semestre del usuario "<< i+1 <<" : ";
		cin>>d[i].semestre;
		
		cout<<"__________________________________________________\n";
	}

	

		int sem;

	do{
		
		cout<<"\n Ingrese el semestre a buscar \n";
		cin>>sem;
		
		if(sem>=1 && sem <=10 ){
			
			for(int i=0; i<10;i++){
				
				if(d[i].semestre==sem){
					
					cout<<"\nNombre: "<< d[i].nombre;
					cout<<"\nApellido: "<< d[i].apellido;
					cout<<"\nCodigo: "<< d[i].codigo;
					cout<<"\nSemestre: "<< d[i].semestre;
					
					cout<<"\n____________________________________\n";
					
				}
				
				
			}
			
			
			
			
		}else{
			
			cout<<"\n Debe ser entre 1 y 10!";
		}
		
		
	}while(sem<1 || sem >10);

	
	 


 return 0;
}


