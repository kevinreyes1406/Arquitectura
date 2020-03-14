#include<iostream>

using namespace std;

int main(){
//declarar numeros
    int num;
    
    int mattriz [5];
    int s=0; 
	int contador[100];
//crear la matriz base de datos
    for(int j=0;j<100;j++){
        contador[j]=s;
    	s++;
	}
	//imprimir contador
	for(int j=0;j<100;j++){
       cout<< contador[j]<<"\n";
    
	}
//iniciar matriz con 0
    for(int i=0;i<5;i++){
    	mattriz[i]=0;	
	}
//llenar la matriz
	for(int i=0;i<5;i++){
    	cout<<"digite un numero";
    	cin>>num;
    	mattriz[i]=num;
	} 
	int m=0;
//imprimir
for(int i=0;i<5;i++){
	for(int j=0;j<100;j++){
		
			if(mattriz[i]==contador[j]){
				m++;
			   
		   }
		   
		   }
		   cout<<mattriz[i]<<"se repite :"<<m;
		        cout<<"\n";
		}
	}




