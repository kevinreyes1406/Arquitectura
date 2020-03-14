#include<iostream>


using namespace std;

int main(){
	char n;
	char vector[8];
	for(int i=0;i<8;i++){
		vector[i]=' ';
	
	}
	
	cout<<"digite de 5 a 8 caracteres";
	for(int i=0;i<8;i++){
		cin>>n;
		vector[i]=n;
		cout<<vector[i];
	}

}

