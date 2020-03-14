#include<iostream>


using namespace std;

int main(){

    int matriz [4][4];
    int numero=0;
	for(int i=0; i<4 ; i++){
		for(int j=0; j<4; j++){
			numero++;
			matriz[i][j]=numero;
		}
	}
	
		for(int j=0; j<1 ; j++){
			for(int i=0; i<4; i++){
			cout<<  matriz[i][j];
			}
		}
		cout<<"  ";
		for(int j=1; j<2 ; j++){
			for(int i=3; i>=0; i--){
			cout<< matriz[i][j];
	}
		}
		cout<<"  ";
			for(int j=2; j<3 ; j++){
			for(int i=0; i<4; i++){
			cout<< matriz[i][j];
		}
		}
		cout<<"  ";
		for(int j=3; j<4 ; j++){
			for(int i=3; i>=0; i--){
			cout<< matriz[i][j];
			}
		}
		
		
		
		
		
		
		
		//4
				cout<<"\n";
			for(int i=0; i<4 ; i++){
			for(int j=0; j<4; j++){
				if(i<j){
					if(i+2<j){	
					cout<<"  ";
			    	cout<< matriz[i][j];
					}	
			}
		}
	}
	//38
		cout<<"\n";
			for(int i=0; i<4 ; i++){
			for(int j=0; j<4; j++){
				if(i<j){
					if(i+2==j){	
					cout<<"  ";
			    	cout<< matriz[i][j];
					}	
			}
		}
	}
		//2712
				
		cout<<"\n";
			for(int i=0; i<4 ; i++){
			for(int j=0; j<4; j++){
			if(i<j){
					if(i+2>j){	
					cout<<"  ";
			    	cout<< matriz[i][j];
					}	
			}
		}
	}	
	//principal
		
		cout<<"\n";
		for(int j=0; j<4 ; j++){
			for(int i=0; i<4; i++){
				if(i==j){
					cout<<"  ";
					cout<< matriz[i][j];
				}
			}
		}
		
		//51015
			cout<<"\n";
			for(int i=0; i<4 ; i++){
			for(int j=0; j<4; j++){
				if(i>j){
					if(i==j+1){	
					cout<<"  ";
			    	cout<< matriz[i][j];
					}	
			}
		}
	}
		
		
		//914
			cout<<"\n";
			for(int i=0; i<4 ; i++){
			for(int j=0; j<4; j++){
				if(i>j){
					if(i==j+2){	
					cout<<"  ";
			    	cout<< matriz[i][j];
					}	
			}
		}
	}
		//13
			cout<<"\n";
			for(int i=0; i<4 ; i++){
			for(int j=0; j<4; j++){
				if(i>j){
					if(i>j+2){	
					cout<<"  ";
			    	cout<< matriz[i][j];
					}	
			}
		}
	}
}
